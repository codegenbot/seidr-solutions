```cpp
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    cout << "Enter two values: ";
    int val1;
    int val2;
    cin >> val1;

    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> val1;
        if (cin.fail()) {
            cout << "Invalid input again. Please enter a valid number.\n";
        }
    }

    if (cin >> val2) {
        if (val1 > val2) {
            cout << "The first number is bigger.\n";
        } else if (val1 < val2) {
            cout << "The second number is bigger.\n";
        } else {
            cout << "Both numbers are equal.\n";
        }
    } else {
        cout << "Invalid input for the second value. Please enter a valid integer.\n";
    }

    return 0;
}
```cpp
#include <iostream>
#include <string>
#include <limits>

using namespace std;

void compareOne(int x) {
    int val2;
    cin >> val2;
}

int originalMain() {
    cout << "Enter two values: ";
    int val1;
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

    cout << "Enter the second value: ";
    string val2;
    cin >> val2;

    if (!val2.empty()) {
        int num = stoi(val2);
        if (val1 > num) {
            cout << "The first number is bigger.\n";
        } else if (val1 < num) {
            cout << "The second number is bigger.\n";
        } else {
            cout << "Both numbers are equal.\n";
        }
    } else {
        cout << "Please enter a valid value for the second number.\n";
    }

    return 0;
}

int main() {
    originalMain();
    return 0;
}
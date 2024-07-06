#include <iostream>
#include <limits>

using namespace std;

int main() {
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
    int val2;
    cin >> val2;

    if (!val2) {
        cout << "Please enter a valid value for the second number.\n";
    } else if (val1 == val2) {
        cout << "Both numbers are equal.\n";
    } else if (val1 > val2) {
        cout << "The first number is bigger.\n";
    } else {
        cout << "The second number is bigger.\n";
    }

    return 0;
}
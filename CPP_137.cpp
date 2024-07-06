#include <iostream>
#include <string>
#include <limits>
#include <boost/any.hpp>

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
    string val2;
    cin >> val2;

    int num2 = 0;
    try {
        num2 = stoi(val2);
    } catch (const invalid_request_exception& e) {
        cout << "Invalid input. Please enter a valid number.\n";
    }

    if (val1 > num2) {
        cout << "The first number is bigger.\n";
    } else if (val1 < num2) {
        cout << "The second number is bigger.\n";
    } else {
        cout << "Both numbers are equal.\n";
    }

    return 0;
}
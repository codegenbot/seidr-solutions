#include <iostream>
#include <string>
#include <limits>

using namespace std;

void compare_one(int num1, int num2) {
    if (num1 > num2) {
        cout << "The first number is bigger.\n";
    } else if (num1 < num2) {
        cout << "The second number is bigger.\n";
    } else {
        cout << "Both numbers are equal.\n";
    }
}

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

    if (!val2.empty()) {
        int num = stoi(val2);
        compare_one(val1, num);
    } else {
        cout << "Please enter a valid value for the second number.\n";
    }

    return 0;
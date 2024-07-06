#include <iostream>
#include <string>
#include <limits>

using namespace std;

void compareOne(int x) {
    int val2;
    cin >> val2;
}

int main() {
    cout << "Enter two values: ";
    int val1;
    while (!(cin >> val1) || val1 <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (cin.fail()) {
        cout << "Invalid input again. Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> val1;
        if (cin.fail()) {
            cout << "Invalid input again. Please enter a valid number.\n";
        }
    }

    cout << "Enter the second value: ";
    if (!(cin >> val1) || val1 <= 0) {
        cout << "Invalid input. Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    compareOne(val1);

    return 0;
}
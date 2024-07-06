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
    while (!(cin >> val1)) {
        cout << "Invalid input. Please enter an integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> val1;
    }

    cout << "Enter the second value: ";
    string val2;
    while (!(cin >> val2) || !val2.empty()) {
        if (val2.empty()) {
            cout << "Please enter a valid value for the second number.\n";
        } else {
            int num = stoi(val2);
            if (val1 > num) {
                cout << "The first number is bigger.\n";
            } else if (val1 < num) {
                cout << "The second number is bigger.\n";
            } else {
                cout << "Both numbers are equal.\n";
            }
        }
    }

    compareOne(val1);

    return 0;
}
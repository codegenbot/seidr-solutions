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

    if (!(val1 == 0 && ((cout << "Enter the second value: "; string val2; cin >> val2; if (!(val2 == "+" || val2 == "-")) { cout << "Invalid input. Please enter '+' or '-'.\n"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); }))) {
        cout << "The first number is bigger.\n";
    } else {
        compareOne(val1);
    }

    return 0;
}
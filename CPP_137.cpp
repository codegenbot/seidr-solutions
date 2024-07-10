#include <iostream>
#include <string>
#include <any>

using namespace std;

int CompareOne(int a, any b) {
    if (any_cast<double>(b) > a) {
        return any_cast<double>(b);
    } else if (a == any_cast<double>(b)) {
        return 0;
    } else {
        return a;
    }
}

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    any<double> b;
    cout << "Enter a floating point number or a string: ";
    cin >> b;

    if (cin.fail()) {
        // If the input is not a valid float, assume it's a string
        if (any_cast<string>(b).find('.') != string::npos || any_cast<string>(b).find('e') != string::npos) {
            cout << "The result is: " << CompareOne(a, stod(any_cast<string>(b))) << endl;
        } else {
            cout << "The result is: " << CompareOne(a, b) << endl;
        }
    } else {
        // If the input is a valid float
        cout << "The result is: " << CompareOne(a, b) << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <any>

using namespace std;
using namespace boost;

int CompareOne(double a, any b) {
    if (any_cast<double>(b) > a) {
        return any_cast<double>(b);
    } else if (a == any_cast<double>(b)) {
        return "None";
    } else {
        return a;
    }
}

int main() {
    double a;
    string b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a floating point number or a string: ";
    cin >> b;

    if (cin.fail()) {
        // If the input is not a valid float, assume it's a string
        if (b.find('.') != string::npos || b.find('e') != string::npos) {
            cout << "The result is: " << CompareOne(a, stod(b)) << endl;
        } else {
            cout << "The result is: " << CompareOne(a, b) << endl;
        }
    } else {
        // If the input is a valid float
        cout << "The result is: " << CompareOne(a, stod(b)) << endl;
    }

    return 0;
}
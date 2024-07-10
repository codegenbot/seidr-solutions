#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

int main() {
    int a;
    string b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a floating point number or a string: ";
    cin >> b;
    
    if (cin.fail()) {
        // If the input is not a valid float, assume it's a string
        if (b.find('.') != string::npos || b.find('e') != string::npos) {
            cout << "The result is: " << compare_one(a, stof(b)) << endl;
        } else {
            cout << "The result is: " << compare_one(a, b) << endl;
        }
    } else {
        // If the input is a valid float
        cout << "The result is: " << compare_one(a, stol(b)) << endl;
    }

    return 0;
}

int compareOne(int a, boost::any b) {
    try {
        int x = boost::any_cast<int>(b);
        if (x > a) {
            return boost::any_cast<int>(b);
        } else if (a == boost::any_cast<int>(b)) {
            return 0;
        } else {
            return a;
        }
    } catch (boost::bad_any_cast& e) {
        return b.convert_to<string>().c_str();
    }
}
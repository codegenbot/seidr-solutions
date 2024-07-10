#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double compare_one(int a, double b) {
    if (b > a) {
        return b;
    } else {
        return static_cast<double>(a);
    }
}

int main_func() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    string s;
    cout << "Enter a floating point number or a string: ";
    cin >> s;

    if (cin.fail()) { 
        // The input was not successful, so clear the error
        cin.clear();
        
        // Check if the failed operation was due to an integer input and then
        // try to read it as an int. If this fails too, then assume the user entered a string.
        cin >> ws;
        double b = 0;
        try {
            b = stod(s);
        } catch (invalid_argument& e) {
            cout << "The result is: " << a << endl;
            return 0;
        }
        
        if (!cin) { 
            // The failed operation could have been due to a string or other non-numeric input.
            cout << "The result is: " << a << endl;
        } else {
            // Now, we're sure the input was a number, so proceed with comparison
            cout << "The result is: " << compare_one(a, b) << endl;
        }
    } else {
        // The input was successful, so process the double value (b)
        double b = stod(s); 
        cout << "The result is: " << compare_one(a, b) << endl;
    }

    return 0;
}
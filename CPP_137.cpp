#include <iostream>
#include <string>
#include <sstream>

using namespace std;

auto compare_one(int a, double b) {
    if (b > a) {
        return b;
    } else if (a == b) {
        return 0;
    } else {
        return a;
    }
}

int main_func() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    string s;
    cout << "Enter a floating point number or a string: ";
    if (!(cin >> s)) { 
        // The input was not successful, so clear the error
        cin.clear();
        
        // Check if the failed operation was due to an integer input and then
        // try to read it as an int. If this fails too, then assume the user entered a string.
        cin >> ws;
        s = cin.ignoreStream().str();

        cout << "The result is: " << a << endl;
    } else {
        // The input was successful, so process the double value (b)
        double b = stod(s); 
        cout << "The result is: " << compare_one(a, b) << endl;
    }

    return 0;
}
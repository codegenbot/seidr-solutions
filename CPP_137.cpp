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
        // handle string input here 
        return "Non numeric value";
    }
}

int main_func() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    double b;
    cout << "Enter a floating point number or a string: ";
    cin >> b;
    
    if (!cin) { 
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "The result is: " << compare_one(a, 0.0) << endl;
    } else {
        // Process double value (b)
        // or handle string input as needed
        cout << "The result is: " << compare_one(a, b) << endl;
    }

    return 0;
}
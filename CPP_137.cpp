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
    cin >> ws >> s;  

    if (cin.fail()) { 
        cout << "The result is: " << compare_one(a, stod(s)) << endl;
    } else {
        cout << "The result is: " << compare_one(a, stod(s)) << endl;  
    }

    return 0;
}
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

    double b;
    string str;
    cout << "Enter a floating point number or a string: ";
    cin >> str; 

    if (str.find('.') != string::npos) { 
        // If the input contains a '.', treat it as a floating point number
        b = stod(str);
    } else {
        // Otherwise, treat it as an integer
        b = stoi(str);
    }

    cout << "The result is: " << compare_one(a, b) << endl;

    return 0;
}
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

    string str;
    cout << "Enter a floating point number or a string: ";
    cin >> str; 

    double b = stod(str); // Always treat the input as a floating point number

    cout << "The result is: " << compare_one(a, b) << endl;

    return 0;
}
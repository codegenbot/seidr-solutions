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
        cin.clear();
        cin >> ws;
        try {
            double b = stod(s);
            cout << "The result is: " << compare_one(a, b) << endl;
        } catch (invalid_argument& e) {
            int b = stoi(s); 
            cout << "The result is: " << compare_one(a, b) << endl;
        }
    } else {
        double b = stod(s); 
        cout << "The result is: " << compare_one(a, b) << endl;
    }

    return 0;
}
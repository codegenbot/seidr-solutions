#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int CompareOne(int a, double b) {
    if (b > a) {
        return b;
    } else if (a == b) {
        return 0;
    } else {
        return a;
    }
}

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    double b;
    cout << "Enter a floating point number or a string: ";
    cin >> b;
    if (!cin) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "The result is: " << a << endl;
    } else {
        cout << "The result is: " << CompareOne(a, b) << endl;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int compare_helper(int a, double b) {
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

    if (cin.fail()) {
        // If the input is not a valid float, assume it's a string
        string str;
        cin.clear();
        cin >> str;
        cout << "The result is: " << compare_helper(a, stod(str)) << endl;
    } else {
        // If the input is a valid float
        cout << "The result is: " << compare_helper(a, b) << endl;
    }

    return 0;
}
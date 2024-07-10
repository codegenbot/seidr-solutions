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

    string str;
    cout << "Enter a floating point number or a string: ";
    getline(cin, str);

    double b = 0.0; // Initialize b to default value

    if (istringstream(str) >> b) {
        // If the input is a valid float
        cout << "The result is: " << CompareOne(a, b) << endl;
    } else {
        // If the input is not a valid float, assume it's a string
        cout << "The result is: " << CompareOne(a, stod(str)) << endl;
    }

    return 0;
}
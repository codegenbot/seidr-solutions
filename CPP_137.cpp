#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    float f;
    string s1, s2;

    cout << "Enter the first value (integer): ";
    cin >> i;

    cout << "Enter the second value: ";
    if (cin >> f) {
        // assume it's a float
        cout << "Float entered. Comparing..." << endl;
    } else if (cin >> s1) {
        // assume it's a string
        cout << "String entered. Comparing..." << endl;
    }

    return 0;
}
```cpp
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
    cin >> b; // This will be read as a double if possible

    if (cin.fail()) { 
        cin.clear();
        cin >> ws;
        try {
            b = stod(str);
            cout << "The result is: " << compare_one(a, b) << endl;
        } catch (invalid_argument& e) {
            int temp = stoi(str); 
            cout << "The result is: " << compare_one(a, temp) << endl;
        }
    } else {
        cout << "The result is: " << compare_one(a, b) << endl;
    }

    return 0;
}
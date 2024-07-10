```cpp
#include <iostream>
#include <string>

using namespace std;

double compare_one(int a, double b) {
    if (b > a) {
        return b;
    } else {
        return static_cast<double>(a);
    }
}

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    string str;
    cout << "Enter a floating point number or a string: ";
    cin >> str; 

    if (str.find('.') != string::npos) { 
        double b = stod(str);
        cout << "The result is: " << compare_one(a, b) << endl;
    } else {
        int b = stoi(str);
        cout << "The result is: " << compare_one(a, static_cast<double>(b)) << endl;
    }

    return 0;
}
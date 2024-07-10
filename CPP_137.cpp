#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    string str;
    cout << "Enter a floating point number or a string: ";
    cin >> str; 

    if (str.find('.') != string::npos) { 
        double b = stod(str);
        if(b > a)
            cout << "The result is: " << b << endl;
        else
            cout << "The result is: " << a << endl;
    } else {
        try {
            int b = stoi(str);
            if(b > a)
                cout << "The result is: " << b << endl;
            else
                cout << "The result is: " << a << endl;
        } catch (invalid_argument& e) {
            cout << "Invalid input. Please enter an integer or floating point number." << endl;
        }
    }

    return 0;
}
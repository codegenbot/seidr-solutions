#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

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
        int b = stoi(str);
        if(static_cast<double>(b) > a) 
            cout << "The result is: " << b << endl;
        else
            cout << "The result is: " << a << endl;
    }

    return 0;
}
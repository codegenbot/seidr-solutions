#include <iostream>
#include <string>
#include <limits>

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
    while(true) {
        cout << "Enter a floating point number or a string: ";
        cin >> str; 
        if (str.find('.') != string::npos || str.size() == 1 && str[0] == '-' || str.size() == 4 || str.size() == 5) {
            break;
        } else {
            cout << "Invalid input. Please enter a floating point number or a string: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    if(str.find('.') != string::npos || str.size() == 1 && str[0] == '-') {
        double b = stod(str);
        cout << "The result is: " << compare_one(a, b) << endl;
    } else {
        int b = stoi(str);
        if(b > a)
            cout << "The result is: " << b << endl;
        else
            cout << "The result is: " << a << endl;
    }

    return 0;
}
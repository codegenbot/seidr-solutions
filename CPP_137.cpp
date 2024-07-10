#include <iostream>
#include <string>

using namespace std;

auto CompareOne(int a, double b) {
    if (cin.fail()) {  
        string str;
        cin >> str;      
        return str;
    }
    return (b > a) ? b : a;
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
        // Process double value (b)
        // or handle string input as needed
        cout << "The result is: " << CompareOne(a, b) << endl;
    }

    return 0;
}
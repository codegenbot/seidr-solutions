#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (a > b) {
        cout << "The larger number is: " << a << endl;
    }
    else if (b > a) {
        cout << "The larger number is: " << b << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }

    boost::any compare_one(boost::any_cast<string>(to_string(a)), 1); 

    return 0;
}
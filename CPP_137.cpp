```cpp
#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

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

    string result = boost::any_cast<string>(compare_one(string("1"), 1));
    cout << "Result from compare_one: " << result << endl;

    return 0;
}

boost::any compare_one(boost::any a, int b) {
    if (boost::any_cast<int>(a) > b)
        return boost::any(string("First is larger"));
    else if (b > boost::any_cast<int>(a))
        return boost::any(string("Second is larger"));
    else
        return boost::any(string("Equal"));
}
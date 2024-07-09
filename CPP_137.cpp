#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(const string& s, int i) {
    if (i > stoi(s)) {
        return boost::any("The larger number is: " + to_string(i));
    }
    else if (stoi(s) > i) {
        return boost::any("The larger number is: " + s);
    }
    else {
        return boost::any("Both numbers are equal.");
    }
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    string b_str;
    cin >> b_str;
    int b_int = stoi(b_str);

    boost::any result = compare_one(to_string(a), b);
    if (result.type() == typeid(string)) {
        cout << boost::any_cast<string>(result) << endl;
    }
    else {
        cout << boost::any_cast<string>(compare_one(to_string(b_int), to_string(a))) << endl;
    }

    return 0;
}
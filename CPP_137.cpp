#include <iostream>
#include<string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        if (strA > to_string(numB)) {
            return a;
        } else if (strA < to_string(numB)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b);
        int numA = boost::any_cast<int>(a);
        if (to_string(numA) > strB) {
            return a;
        } else if (to_string(numA) < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}

int main() {
    int x;
    double y;
    string s;

    cout << "Enter an integer: ";
    cin >> x;
    cout << "Enter a double: ";
    cin >> y;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, s);

    boost::any a = boost::any(x);
    boost::any b = boost::any(y);
    boost::any c = boost::any(s);

    boost::any result = compare_one(a, b);
    if (result.type() == typeid(string)) {
        cout << "The result is: " << boost::any_cast<string>(result) << endl;
    } else {
        cout << "The result is: " << boost::any_cast<double>(result) << endl;
    }

    return 0;
}
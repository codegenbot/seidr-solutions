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
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
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
    int num1, num2;
    string str1, str2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    boost::any a = boost::any(num1);
    boost::any b = boost::any(num2);
    boost::any c = boost::any(str1);
    boost::any d = boost::any(str2);

    boost::any result = compare_one(c, d);

    if (result.type() == typeid(string)) {
        cout << "Result: " << boost::any_cast<string>(result) << endl;
    } else {
        cout << "Result: " << boost::any_cast<int>(result) << endl;
    }

    return 0;
}
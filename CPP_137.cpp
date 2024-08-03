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
    string s1, s2;

    cout << "Enter first number or string: ";
    cin >> boost::any(&num1).type(typeid(int));
    
    cout << "Enter second number or string: ";
    cin >> boost::any(&num2).type(typeid(int));

    boost::any result = compare_one(boost::any(num1), boost::any(num2));

    if (result.type() == typeid(string)) {
        cout << "Result: " << boost::any_cast<string>(result) << endl;
    } else {
        cout << "Result: " << boost::any_cast<int>(result) << endl;
    }
    
    return 0;
}
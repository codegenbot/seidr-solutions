#include <boost/any.hpp>
#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int num1 = stoi(str1.substr(0, str1.find(',')));
        double num2 = stod(str2.substr(0, str2.find(',')));

        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("Both numbers are equal");
        }
    } else {
        return boost::any("None");
    }
}
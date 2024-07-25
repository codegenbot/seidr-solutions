#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int num1 = std::stoi(str1.substr(0, str1.find(',')));
        int num2 = std::stoi(str2.substr(0, str2.find(',')));

        if (num1 > num2) {
            return a;
        }
        else if (num1 < num2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = any_cast<string>(a);
        int num = std::stoi(str.substr(0, str.find(',')));
        double d = any_cast<double>(b);

        if (num > d) {
            return a;
        }
        else if (num < d) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = any_cast<double>(a);
        string str = any_cast<string>(b);

        int num = std::stoi(str.substr(0, str.find(',')));
        if (d > num) {
            return a;
        }
        else if (d < num) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }

    // If none of the above conditions match
    return boost::any("None");
}
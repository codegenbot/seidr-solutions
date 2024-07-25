#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

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

        double num1 = stod(str1);
        double num2 = stod(str2);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        double num = stod(str);

        if (num > any_cast<double>(b))
            return a;
        else
            return boost::any("None");
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double num = any_cast<double>(a);

        if (num > stod(any_cast<string>(b)))
            return a;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}
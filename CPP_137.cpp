#include <boost/any.hpp>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((long)a.convert_to<int>(), b.convert_to<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        istringstream iss(str1);
        double num1;
        iss >> noskipws >> num1;

        istringstream iss2(str2);
        double num2;
        iss2 >> noskipws >> num2;

        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if ((a.type() == typeid(string) && b.type() != typeid(string)) ||
               (b.type() == typeid(string) && a.type() != typeid(string))) {
        return boost::any("None");
    }

    return max(a, b);
}
#include <boost/any.hpp>
#include <string>

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
        double num1 = stod(str1);
        double num2 = stod(str2);
        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}
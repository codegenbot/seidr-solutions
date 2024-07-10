#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a,string>().type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 != "" && str2 != "") {
            double num1 = stod(str1);
            double num2 = stod(str2);
            if (num1 > num2) return a;
            else if (num1 < num2) return b;
            else return any("None");
        } else if (!str1.empty()) return a;
        else if (!str2.empty()) return b;
    }
    else {
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);
        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return any("None");
    }
    return any("None");
}
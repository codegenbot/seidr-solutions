#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max(a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = a.convert_to<string>();
        int num = boost::any_cast<int>(b);
        double dnum = boost::any_cast<double>(b);
        if (str > to_string(num))
            return a;
        else if (str > to_string(dnum))
            return a;
        else
            return boost::any("None");
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        int num = boost::any_cast<int>(a);
        double dnum = boost::any_cast<double>(a);
        if (to_string(num) > str)
            return a;
        else if (to_string(dnum) > str)
            return a;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}
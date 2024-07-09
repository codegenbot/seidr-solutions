#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max((double)a.convert_to<double>(), (int)b.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>())
            return a;
        else if ((string)b.convert_to<string>() > (string)a.convert_to<string>())
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        if (b.type() == typeid(double)) {
            string s = to_string((double)b.convert_to<double>());
            if ((string)a.convert_to<string>() > s)
                return a;
            else
                return boost::any("None");
        } else {
            return boost::any("None");
        }
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        if (a.type() == typeid(double)) {
            string s = to_string((double)a.convert_to<double>());
            if ((string)b.convert_to<string>() > s)
                return b;
            else
                return boost::any("None");
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}
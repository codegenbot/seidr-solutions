#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a > b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
             (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        return f > boost::lexical_cast<float>(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(b);
        string s = boost::any_cast<string>(a);
        return boost::lexical_cast<float>(s) > f ? a : b;
    }
    return "None";
}
#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        return (boost::any_cast<string>(b) > boost::any_cast<string>(a)) ? b : a;
    } else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
               (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    return b;
}
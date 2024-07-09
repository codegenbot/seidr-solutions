#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return any("None");
    }
    else {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
            return a;
        else if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
            return b;
        else
            return any("None");
    }
}
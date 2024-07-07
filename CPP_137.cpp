#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_a > str_b)
            return a;
        else if (str_a < str_b)
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
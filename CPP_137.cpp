#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(boost::any_cast<double>(b));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<int>(a));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    }
    else {
        double d1 = boost::any_cast<double>(a);
        double d2 = boost::any_cast<double>(b);
        if (d1 > d2)
            return a;
        else if (d1 < d2)
            return b;
        else
            return boost::any("None");
    }
}
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b))
            return a;
        else
            return boost::any(std::string("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any(std::string("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any(std::string("None"));
    }
}
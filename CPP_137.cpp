#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);

        return da > db ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);

        return sa > sb ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double da = boost::any_cast<double>(a);
        std::string sb = boost::any_cast<std::string>(b);

        return da > stod(sb) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double db = boost::any_cast<double>(b);
        std::string sa = boost::any_cast<std::string>(a);

        return stod(sa) > db ? a : b;
    }

    // If all else fails, the values are equal
    return boost::any("None");
}
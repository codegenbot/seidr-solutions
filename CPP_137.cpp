```
#include <boost/any.hpp>
#include <string>
#include <cmath>

using namespace boost;

boost::any comp(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(int));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(double));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(std::string));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double y = boost::any_cast<double>(b);
        std::string x = boost::any_cast<std::string>(a);
        if (std::stod(x) > y)
            return a;
        else if (y > std::stod(x))
            return b;
        else
            return any(typeid(std::string));
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > std::stod(y))
            return a;
        else if (std::stod(y) > x)
            return b;
        else
            return any(typeid(double));
    } else {
        return any(typeid(int));
    }
}
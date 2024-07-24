```
#include <boost/any.hpp>
#include <string>

boost::any compareOne(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (std::stod(x) > std::stod(y))
            return a;
        else if (std::stod(y) > std::stod(x))
            return b;
        else
            return a;
    } else {
        return a;
    }
}
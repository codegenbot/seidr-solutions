#include <boost/any.hpp>
#include <string>

std::any compare_one(std::any a, std::any b) {
    bool found = false;
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            found = true;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            found = true;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            found = true;
    } else if ((a.type() == typeid(std::string) && b.type() == typeid(double)) ||
               (a.type() == typeid(double) && b.type() == typeid(std::string))) {
        double y;
        std::string x = boost::any_cast<std::string>(a);
        if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
            y = boost::any_cast<double>(b);
        } else {
            x = boost::any_cast<std::string>(b);
            y = std::stod(x);
        }
        if (std::stod(x) > y)
            return a;
        else if (y > std::stod(x))
            return b;
        else
            found = true;
    } else {
        found = true;
    }

    if (!found)
        return "None";
}
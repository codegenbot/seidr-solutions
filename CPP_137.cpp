#include <boost/any.hpp>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && a.type() == typeid(b)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(double) && a.type() == typeid(b)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(std::string) && a.type() == typeid(b)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else if ((a.type() == typeid(std::string) && b.type() == typeid(double)) || 
               (a.type() == typeid(double) && b.type() == typeid(std::string))) {
        double y = boost::any_cast<double>(b);
        std::string x = boost::any_cast<std::string>(a);
        if (std::stod(x) > y)
            return a;
        else if (y > std::stod(x))
            return b;
        else
            return "None";
    } else {
        return "None";
    }
}
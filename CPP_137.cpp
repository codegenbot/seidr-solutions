```cpp
#include <boost/any.hpp>
#include <string>

std::any compare_one(std::any a, std::any b) {
    try {
        if (a.type() == typeid(int) && b.type() == typeid(int)) {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return (x > y) ? a : ((y > x) ? b : "None");
        } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
            double x = boost::any_cast<double>(a);
            double y = boost::any_cast<double>(b);
            return (x > y) ? a : ((y > x) ? b : "None");
        } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
            std::string x = boost::any_cast<std::string>(a);
            std::string y = boost::any_cast<std::string>(b);
            return (x > y) ? a : ((y > x) ? b : "None");
        } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
            double y = boost::any_cast<double>(b);
            std::string x = boost::any_cast<std::string>(a);
            return (std::stod(x) > y) ? a : ((y > std::stod(x)) ? b : "None");
        } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
            double x = boost::any_cast<double>(a);
            std::string y = boost::any_cast<std::string>(b);
            return (x > std::stod(y)) ? a : ((std::stod(y) > x) ? b : "None");
        } else {
            return "None";
        }
    } catch (const boost::bad_any_cast& e) {
        return "None";
    }
}
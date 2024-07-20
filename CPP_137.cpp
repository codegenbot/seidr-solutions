#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : ((double)a == (double)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : ((int)a == (double)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : ((double)a == (int)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        return (std::string)a > std::to_string((double)b) ? a : ((std::string)a == std::to_string((double)b)) ? boost::any("None") : boost::any(std::to_string((double)b));
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        return (double)a > std::stod((std::string)b) ? a : ((double)a == std::stod((std::string)b)) ? boost::any("None") : boost::any(std::to_string((double)a));
    } else {
        return boost::any("Invalid input");
    }
}
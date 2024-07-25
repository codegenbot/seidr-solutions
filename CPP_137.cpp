#include "boost/any.hpp"

namespace boost {

int compare(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? 1 : ((x < y) ? -1 : 0);
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? 1 : ((x < y) ? -1 : 0);
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? 1 : ((x < y) ? -1 : 0);
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double)))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        return (std::stod(x) > y) ? 1 : ((std::stod(x) < y) ? -1 : 0);
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > std::stod(y)) ? 1 : ((x < std::stod(y)) ? -1 : 0);
    } else {
        return 0;
    }
}
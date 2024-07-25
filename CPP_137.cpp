#include "boost/any.hpp"

namespace boost {

int compare(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) - (x < y);
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) - (x < y);
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x.compare(y);
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double)))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        return x.compare(std::to_string(y));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return std::to_string(x).compare(y);
    } else {
        return 0;
    }
}
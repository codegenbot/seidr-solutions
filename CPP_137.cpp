#include "boost/any.hpp"

namespace boost {

int compare(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else {
        return 0; // changed from "None"
    }
}
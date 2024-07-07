#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : (double)b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a > (std::string)b ? a : b;
    }
    else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
             (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    else {
        return a > b ? a : b;
    }
}
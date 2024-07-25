#include <boost/any.hpp>
#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : (double)b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a > (std::string)b ? a : b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) &&
               (b.type() == typeid(std::string))) {
        return (int)a > std::stoi((std::string)b) ? a : b;
    } else if ((a.type() == typeid(std::string)) && (b.type() == typeid(int) ||
                                                      b.type() == typeid(double))) {
        return std::stoi((std::string)a) > (int)b ? a : b;
    }
    return boost::any("None");
}
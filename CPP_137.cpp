#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b))) ? a : b;
    } else {
        return "None";
    }
}
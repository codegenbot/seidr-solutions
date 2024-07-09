#include <boost/any.hpp>
#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        return (std::stof(strB) > std::stof(strA)) ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float val = boost::any_cast<float>(b);
        return (val > std::stof(boost::any_cast<std::string>(a))) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float val = boost::any_cast<float>(a);
        return (std::stof(boost::any_cast<std::string>(b)) > val) ? b : a;
    } else {
        throw std::runtime_error("Invalid input type");
    }
}
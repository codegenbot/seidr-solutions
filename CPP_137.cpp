#include <boost/any.hpp>
#include <cassert>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float valA = std::stof(boost::any_cast<std::string>(a));
        float valB = std::stof(boost::any_cast<std::string>(b));
        return valA > valB ? a : (valA < valB ? b : "None");
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        float valA = a.type() == typeid(int) ? boost::any_cast<int>(a) : std::stof(boost::any_cast<std::string>(a));
        float valB = b.type() == typeid(int) ? boost::any_cast<int>(b) : std::stof(boost::any_cast<std::string>(b));
        return valA > valB ? a : (valA < valB ? b : "None");
    } else {
        throw std::runtime_error("Unsupported data types for comparison.");
    }
}
#include <any>
#include <string> // Add this header for std::string
#include <cassert> // Add this header for assert
#include <boost/any.hpp> // Add this header for boost::any_cast
#include <boost/lexical_cast.hpp> // Add this header for boost::lexical_cast

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float valA = boost::lexical_cast<float>(std::any_cast<std::string>(a));
        float valB = boost::lexical_cast<float>(std::any_cast<std::string>(b));
        return valA > valB ? a : (valA < valB ? b : "None");
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        float valA = a.type() == typeid(int) ? std::any_cast<int>(a) : boost::lexical_cast<float>(std::any_cast<std::string>(a));
        float valB = b.type() == typeid(int) ? std::any_cast<int>(b) : boost::lexical_cast<float>(std::any_cast<std::string>(b));
        return valA > valB ? a : (valA < valB ? b : "None");
    }
    assert(false);
}
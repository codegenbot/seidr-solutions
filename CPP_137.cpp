#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        
        std::replace(str_a.begin(), str_a.end(), ',', '.');
        std::replace(str_b.begin(), str_b.end(), ',', '.');
        
        return (std::stod(str_a) > std::stod(str_b)) ? a : ((std::stod(str_a) < std::stod(str_b)) ? b : boost::any(nullptr));
    }
    return boost::any(nullptr);
}
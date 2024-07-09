#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
        } else if (a.type() == typeid(float)) {
            return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
        } else if (a.type() == typeid(std::string)) {
            std::string str_a = boost::any_cast<std::string>(a);
            std::string str_b = boost::any_cast<std::string>(b);
            if (str_a.find_first_of(".,") != std::string::npos) {
                std::replace(str_a.begin(), str_a.end(), ',', '.');
            }
            if (str_b.find_first_of(".,") != std::string::npos) {
                std::replace(str_b.begin(), str_b.end(), ',', '.');
            }
            return stod(str_a) > stod(str_b) ? a : b;
        }
    }
    return boost::any();
}
#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (a.type().name() == typeid(std::string).name()) {
            std::string str_a = boost::any_cast<std::string>(a);
            std::string str_b = boost::any_cast<std::string>(b);
            if (str_a.find(".") != std::string::npos || str_a.find(",") != std::string::npos) {
                str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
                str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
            }
            if (std::stof(str_a) > std::stof(str_b)) {
                return a;
            } else if (std::stof(str_a) < std::stof(str_b)) {
                return b;
            }
        }
    }
    return boost::any(nullptr);
}
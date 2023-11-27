#include <boost/algorithm/string.hpp>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if (int_a > int_b) {
            return int_a;
        } else if (int_b > int_a) {
            return int_b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if (float_a > float_b) {
            return float_a;
        } else if (float_b > float_a) {
            return float_b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        boost::algorithm::replace_all(str_a, ",", ".");
        boost::algorithm::replace_all(str_b, ",", ".");
        float float_a = std::stof(str_a);
        float float_b = std::stof(str_b);
        if (float_a > float_b) {
            return str_a;
        } else if (float_b > float_a) {
            return str_b;
        }
    }
    return boost::any("None");
}
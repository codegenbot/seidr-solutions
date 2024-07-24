#include <variant>
#include <boost/any.hpp>

std::variant<std::string, int, float> compare_one(std::variant<boost::any> a, std::variant<boost::any> b) {
    if (auto *int_a = boost::any_cast<int>(&get(boost::any, a)); auto *int_b = boost::any_cast<int>(&get(boost::any, b))) {
        return std::to_string(std::max(*int_a, *int_b));
    } else if (auto *float_a = boost::any_cast<float>(&get<boost::any>(a)); auto *float_b = boost::any_cast<float>(&get<boost::any>(b))) {
        return std::to_string(std::max(*float_a, *float_b));
    } else if (auto *str_a = boost::any_cast<std::string>(&get<boost::any>(a)); auto *str_b = boost::any_cast<std::string>(&get<boost::any>(b))) {
        return (*str_a > *str_b) ? *str_a : *str_b;
    } else {
        // Handle all other cases or unexpected inputs
        return 0;
    }
}
#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <algorithm>

boost::any max_value(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        return (int_a > int_b) ? a : (int_a < int_b) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        return (float_a > float_b) ? a : (float_a < float_b) ? b : "None";
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str_a = boost::any_cast<std::string>(a);
        std::string str_b = boost::any_cast<std::string>(b);
        std::replace(str_a.begin(), str_a.end(), ',', '.');
        std::replace(str_b.begin(), str_b.end(), ',', '.');
        float a_float = std::stof(str_a);
        float b_float = std::stof(str_b);
        return (a_float > b_float) ? a : (a_float < b_float) ? b : "None";
    } else {
        return "None";
    }
}

int main() {
    boost::any a = 10;
    boost::any b = 20;
    boost::any result = max_value(a, b);

    if (result.type() == typeid(int) || result.type() == typeid(float)) {
        std::cout << boost::any_cast<int>(result) << std::endl;
    } else {
        std::cout << boost::any_cast<std::string>(result) << std::endl;
    }

    return 0;
}
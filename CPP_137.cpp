#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <boost/lexical_cast.hpp>

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
        boost::replace_all(str_a, ",", ".");
        boost::replace_all(str_b, ",", ".");
        float a_float = boost::lexical_cast<float>(str_a);
        float b_float = boost::lexical_cast<float>(str_b);
        return (a_float > b_float) ? a : (a_float < b_float) ? b : "None";
    } else {
        return "None";
    }
}

int main() {
    // Example usage
    boost::any a = 10;
    boost::any b = 20;
    boost::any result = max_value(a, b);

    if (result.type() == typeid(int) || result.type() == typeid(float)) {
        std::cout << boost::any_cast<float>(result) << std::endl;
    } else {
        std::cout << boost::any_cast<std::string>(result) << std::endl;
    }

    return 0;
}
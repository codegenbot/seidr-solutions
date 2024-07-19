#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    // Check if both values are integers
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any("None")));
    }
    // Check if both values are floats
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : ((bf > af) ? b : boost::any("None")));
    }
    // Check if both values are strings
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (as > bs) ? a : ((bs > as) ? b : boost::any("None")));
    }
    // If values are of different types, or if one is an integer and the other is not
    else {
        std::cout << "Invalid input. Please enter integers, floats, or strings representing real numbers.\n";
        return boost::any();
    }
}
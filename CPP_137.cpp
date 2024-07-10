```cpp
#include <iostream>
#include <string>
#include <boost/variant.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::holds_alternative<int>(a)) {
        int ai = boost::get<int>(a);
        if (boost::holds_alternative<double>(b)) {
            double bi = boost::get<double>(b);
            return ai > bi ? a : b;
        }
        else if (boost::holds_alternative<std::string>(b)) {
            std::string bs = boost::get<std::string>(b);
            return std::to_string(ai) > bs ? a : b;
        }
    }
    else if (boost::holds_alternative<double>(a)) {
        double ai = boost::get<double>(a);
        if (boost::holds_alternative<int>(b)) {
            int bi = boost::get<int>(b);
            return ai > bi ? a : b;
        }
        else if (boost::holds_alternative<std::string>(b)) {
            std::string bs = boost::get<std::string>(b);
            return std::to_string(ai) > bs ? a : b;
        }
    }
    else {
        std::string ai = boost::get<std::string>(a);
        if (boost::holds_alternative<int>(b)) {
            int bi = boost::get<int>(b);
            return ai > std::to_string(bi) ? a : b;
        }
        else if (boost::holds_alternative<double>(b)) {
            double bi = boost::get<double>(b);
            return ai > std::to_string(bi) ? a : b;
        }
        else {
            std::string bs = boost::get<std::string>(b);
            return ai > bs ? a : b;
        }
    }
}
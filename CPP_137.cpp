#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return ai > bi ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return af > bf ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string astr = boost::any_cast<std::string>(a);
        std::string bstr = boost::any_cast<std::string>(b);
        return astr > bstr ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return ai > bf ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return af > bi ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string astr = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return astr > std::to_string(bi) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string astr = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return astr > std::to_string(bf) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string astr = boost::any_cast<std::string>(b);
        return ai > std::stoi(astr) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string astr = boost::any_cast<std::string>(b);
        return af > std::stof(astr) ? a : b;
    }

    return boost::any("None");
}
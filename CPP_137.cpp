#include <boost/any.hpp>
#include <string>
#include <stdexcept>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((ai < bi) ? b : boost::any((int)0));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : ((af < bf) ? b : boost::any((float)0.0));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (as > bs) ? a : ((as < bs) ? b : boost::any(""));
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((ai < bf) ? b : boost::any((int)0));
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > std::stof(bs)) ? a : ((ai < std::stof(bs)) ? b : boost::any((int)0));
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (af > std::stof(bs)) ? a : ((af < std::stof(bs)) ? b : boost::any((float)0.0));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (std::stof(as) > bi) ? a : ((std::stof(as) < bi) ? b : boost::any(""));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return (std::stof(as) > bf) ? a : ((std::stof(as) < bf) ? b : boost::any(""));
    } else {
        throw std::invalid_argument("Invalid input type");
    }
}
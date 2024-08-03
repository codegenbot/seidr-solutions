```
#include <boost/any.hpp>
#include <string>
#include <limits>

using namespace boost;

bool compare(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return ai > bi;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return af > bf;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return as > bs;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return ai > bf;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return ai > std::stof(bs);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return af > std::stof(bs);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return std::stof(as) > bi;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return std::stof(as) > bf;
    } else {
        throw std::invalid_argument("Invalid input type");
    }
}
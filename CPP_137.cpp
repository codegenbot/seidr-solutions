#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : (bf > ai) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > std::stoi(bs)) ? a : (std::stoi(bs) > ai) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : (bi > af) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (af > std::stod(bs)) ? a : (std::stod(bs) > af) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (std::stod(as) > bi) ? a : (bi > std::stod(as)) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return (std::stod(as) > bf) ? a : (bf > std::stod(as)) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (std::stod(as) > std::stod(bs)) ? a : (std::stod(bs) > std::stod(as)) ? b : a;
    }
    else
        return a;
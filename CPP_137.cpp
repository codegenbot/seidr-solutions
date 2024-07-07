#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bi = boost::any_cast<double>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > std::stod(bs)) ? a : ((std::stod(bs) > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ai = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double ai = boost::any_cast<double>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > std::stod(bs)) ? a : ((std::stod(bs) > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (std::stod(as) > bi) ? a : ((bi > std::stod(as)) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string as = boost::any_cast<std::string>(a);
        double bi = boost::any_cast<double>(b);
        return (std::stod(as) > bi) ? a : ((bi > std::stod(as)) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (std::stod(as) > std::stod(bs)) ? a : ((std::stod(bs) > std::stod(as)) ? b : boost::any(typeid(string)));
    }
    else {
        return boost::any(typeid(string));
    }
}
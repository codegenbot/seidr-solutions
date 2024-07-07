#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) a > (int) b ? a : (b.type() == typeid(int) ? b : boost::any_cast<std::string>(boost::any_cast<std::string>(b) > boost::any_cast<std::string>(a) ? b : "None"));
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : (boost::any_cast<double>(b) > boost::any_cast<double>(a) ? b : "None");
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > 0.0 ? b : a;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > 0.0 ? a : b;
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(b) > boost::any_cast<std::string>(a) ? b : "None";
    }
    if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > 0.0 ? a : (y > "0" ? b : "None");
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        std::string y = boost::any_cast<std::string>(a);
        return x > 0.0 ? b : (y > "0" ? a : "None");
    }
    return "None";
}
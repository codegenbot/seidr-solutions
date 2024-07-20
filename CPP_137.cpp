#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return (x > y) ? a : ((x < y) ? b : boost::any("None"));
        } else if (a.type() == typeid(double)) {
            double x = boost::any_cast<double>(a);
            double y = boost::any_cast<double>(b);
            return (x > y) ? a : ((x < y) ? b : boost::any("None"));
        } else if (a.type() == typeid(std::string)) {
            std::string x = boost::any_cast<std::string>(a);
            std::string y = boost::any_cast<std::string>(b);
            return (x > y) ? a : ((x < y) ? b : boost::any("None"));
        }
    } else {
        if (a.type() == typeid(int)) {
            int x = boost::any_cast<int>(a);
            double y = boost::any_cast<double>(b);
            return (y < x) ? a : b;
        } else if (a.type() == typeid(double)) {
            double x = boost::any_cast<double>(a);
            std::string y = boost::any_cast<std::string>(b);
            if (std::stod(y) > x) return b;
            else return a;
        } else if (a.type() == typeid(std::string)) {
            std::string x = boost::any_cast<std::string>(a);
            double y = boost::any_cast<double>(b);
            if (std::stod(x) < y) return a;
            else return b;
        }
    }
}
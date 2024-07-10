#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ia = boost::any_cast<int>(a);
        double ib = boost::any_cast<double>(b);
        return ib > ia ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ia = boost::any_cast<double>(a);
        int ib = boost::any_cast<int>(b);
        return ia > ib ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string sa = boost::any_cast<std::string>(a);
        double sb = boost::any_cast<double>(b);
        return stod(sa) > sb ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double sa = boost::any_cast<double>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return sa > stod(sb) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return any("None");
    }
    else {
        return any("None");
    }
}
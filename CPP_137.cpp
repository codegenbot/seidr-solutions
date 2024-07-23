#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.cast<string>() > b.cast<string>() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int a_int = boost::any_cast<int>(a);
        return a_int > std::stod(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        return std::stod(s) > b_int ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double a_double = boost::any_cast<double>(a);
        return a_double > std::stod(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double b_double = boost::any_cast<double>(b);
        return std::stod(s) > b_double ? a : b;
    }

    return "None";
}
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<float>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return stof(strA) > stod(strB) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stof(boost::any_cast<string>(a)) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)boost::any_cast<int>(a) > stod(boost::any_cast<string>(b)) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return boost::any_cast<double>(a) > boost::any_cast<float>(b) ? a : b;
    } else {
        return "None";
    }
}
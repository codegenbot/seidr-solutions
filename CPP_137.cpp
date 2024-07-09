#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return stof(strB) > stof(strA) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > stof(boost::any_cast<string>(a)) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return stof(boost::any_cast<string>(b)) > boost::any_cast<float>(a) ? b : a;
    } else {
        return "None";
    }
}
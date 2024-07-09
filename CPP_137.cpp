#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : (boost::any_cast<float>(b) >= boost::any_cast<int>(a), b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b)
            ? a
            : (boost::any_cast<double>(b) >= boost::any_cast<int>(a), b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > (int)boost::any_cast<int>(b)
            ? a
            : (boost::any_cast<int>(b) >= boost::any_cast<float>(a), b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > (int)boost::any_cast<int>(b)
            ? a
            : (boost::any_cast<int>(b) >= boost::any_cast<double>(a), b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return boost::any_cast<string>(a) > to_string((int)boost::any_cast<int>(b))
            ? a
            : (to_string((int)boost::any_cast<int>(b)) >= boost::any_cast<string>(a), "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return boost::any_cast<string>(a) > to_string(boost::any_cast<float>(b))
            ? a
            : (to_string(boost::any_cast<float>(b)) >= boost::any_cast<string>(a), "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any_cast<string>(a) > to_string(boost::any_cast<double>(b))
            ? a
            : (to_string(boost::any_cast<double>(b)) >= boost::any_cast<string>(a), "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b)
            ? a
            : (boost::any_cast<string>(b) >= boost::any_cast<string>(a), "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<string>(b)
            ? a
            : (boost::any_cast<string>(b) >= (int)boost::any_cast<int>(a), "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<float>(a) > boost::any_cast<string>(b)
            ? a
            : (boost::any_cast<string>(b) >= boost::any_cast<float>(a), "None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<double>(a) > boost::any_cast<string>(b)
            ? a
            : (boost::any_cast<string>(b) >= boost::any_cast<double>(a), "None");
    } else {
        return "None";
    }
}
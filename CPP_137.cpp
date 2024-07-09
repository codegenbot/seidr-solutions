#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a > b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b
            : boost::any((long)boost::any_cast<int>(a));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
            ? a
            : boost::any((long)boost::any_cast<int>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        return stof(b_str) > stof(a_str)
            ? a
            : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stof(boost::any_cast<string>(b)) > boost::any_cast<float>(a)
            ? b
            : boost::any((long)boost::any_cast<int>(a));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<float>(a) > stof(boost::any_cast<string>(b))
            ? a
            : boost::any((long)boost::any_cast<int>(b));
    }
    return boost::any((long)0);
}
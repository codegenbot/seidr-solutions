#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a.convert_to<int>() > (float) b.convert_to<float>() ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float) a.convert_to<float>() > boost::any_cast<string>(b) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) a.convert_to<int>() > (int) b.convert_to<int>() ? b : a;
    } else {
        return "None";
    }
}
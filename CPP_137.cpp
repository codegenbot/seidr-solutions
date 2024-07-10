#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (double) b ? a : (b.convert_to<boost::any>()).type().name();
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float) a > stod(b.convert_to<string>().c_str()) ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert_to<string>().compare(b.convert_to<string>()) > 0 ? a : (boost::any)"None";
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) a > (int) b ? a : (b.convert_to<boost::any>()).type().name();
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float) a > (float) b ? a : (b.convert_to<boost::any>()).type().name();
    }
}
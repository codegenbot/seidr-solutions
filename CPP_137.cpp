#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(b.convert_to<string>().c_str()) >= stod(a.convert_to<string>().c_str())) {
            return b;
        } else {
            return a;
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (get<double>(a) > get<double>(b)) {
            return a;
        } else if (get<double>(a) < get<double>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}
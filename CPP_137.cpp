#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (lexical_cast<int>(b.convert_to<string>()) >= lexical_cast<int>(a.convert_to<string>())) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        if (lexical_cast<double>(b.convert_to<double>()) >= lexical_cast<double>(a.convert_to<string>())) {
            return b;
        } else {
            return "None";
        }
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        if (lexical_cast<double>(a.convert_to<double>()) >= lexical_cast<double>(b.convert_to<string>())) {
            return a;
        } else {
            return "None";
        }
    }

    return b;
}
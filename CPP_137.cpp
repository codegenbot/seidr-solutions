#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(b.convert_to<string>().c_str()) > a.convert_to<string>().c_str())
            return b;
        else
            return "None";
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>().c_str()) < stod(b.convert_to<string>().c_str()))
            return b;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (lexicographical_compare(a.convert_to<string>().begin(), a.convert_to<string>().end(),
                                    b.convert_to<string>().begin(), b.convert_to<string>().end()))
            return b;
        else
            return "None";
    } else {
        return "None";
    }
}
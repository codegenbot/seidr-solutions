#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);

        if (num > 0.0f) {
            return a;
        } else {
            return b;
        }
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);

        if (num > 0.0f) {
            return b;
        } else {
            return boost::any("None");
        }
    }

    return boost::any();
}
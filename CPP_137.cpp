#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA > strB ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return to_string(numA) > strB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        return strA > to_string(numB) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float numA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return to_string(numA) > strB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float numB = boost::any_cast<float>(b);
        return strA > to_string(numB) ? a : b;
    }
    return boost::any("None");
}
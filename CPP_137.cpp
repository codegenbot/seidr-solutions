#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA != "None" && strB != "None") {
            return (stod(strA) > stod(strB)) ? a : b;
        }
    }

    if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
        return boost::any("None");
    }

    return a > b ? a : b;
}
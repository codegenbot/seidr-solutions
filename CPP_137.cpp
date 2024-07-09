#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA == "None" || strB == "None") {
            return a;
        } else if (stod(strA) > stod(strB)) {
            return a;
        } else if (stod(strA) < stod(strB)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string strA = boost::any_cast<string>(a);
        double numB = boost::any_cast<double>(b);

        if (strA == "None") {
            return a;
        } else if (stod(strA) > numB) {
            return a;
        } else if (stod(strA) < numB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        throw invalid_argument("Invalid input type");
    }
}
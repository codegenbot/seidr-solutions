#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        size_t pos = strB.find(',');
        if (pos != string::npos) {
            strB.erase(pos, 1);
        }
        return (stod(strA) > stod(strB)) ? a : b;
    }
    if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string strA = boost::any_cast<string>(a);
        size_t pos = strA.find(',');
        if (pos != string::npos) {
            strA.erase(pos, 1);
        }
        return (stod(strA) > boost::any_cast<double>(b)) ? a : b;
    }
    if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b);
        size_t pos = strB.find(',');
        if (pos != string::npos) {
            strB.erase(pos, 1);
        }
        return (boost::any_cast<double>(a) > stod(strB)) ? a : b;
    }
    if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
        return boost::any(static_cast<ostringstream&&(ostringstream() << "None")));
    }
    return a > b ? a : b;
}
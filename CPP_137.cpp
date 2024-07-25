#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        size_t pos = strA.find(',');
        if (pos != string::npos) {
            strA = strA.substr(0, pos).trim();
        }

        pos = strB.find(',');
        if (pos != string::npos) {
            strB = strB.substr(0, pos).trim();
        }

        return (stod(strA) > stod(strB)) ? a : b;
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);

        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos).trim();
        }

        return (stod(str) > boost::any_cast<double>(b)) ? a : b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);

        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos).trim();
        }

        return (boost::any_cast<double>(a) > stod(str)) ? a : b;
    } else {
        return "None";
    }
}
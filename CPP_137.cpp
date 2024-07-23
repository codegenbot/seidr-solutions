#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a > (int)b) {
            return a;
        } else if ((int)a < (int)b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if ((double)a > (double)b) {
            return a;
        } else if ((double)a < (double)b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double da = stod(boost::any_cast<string>(a).erase(0, 1));
            double db = (double)b;
            if (da > db) {
                return a;
            } else if (da < db) {
                return b;
            } else {
                return boost::any("None");
            }
        } catch (...) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t pos = boost::any_cast<string>(a).find(',');
        string sa = boost::any_cast<string>(a).substr(0, pos);
        size_t pos2 = boost::any_cast<string>(b).find(',');
        string sb = boost::any_cast<string>(b).substr(0, pos2);
        if (stod(sa) > stod(sb)) {
            return a;
        } else if (stod(sa) < stod(sb)) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    return b;
}
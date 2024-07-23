#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : ((double)b == (int)b) ? "None" : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : ((int)b == (double)b) ? "None" : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(any_cast<string>(a));
        return da > (double)b ? a : ((double)b == da) ? "None" : boost::any(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double db = stod(any_cast<string>(b));
        return (double)a > db ? a : ((db == (double)db)) ? "None" : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string da = any_cast<string>(a);
        string db = any_cast<string>(b);
        return stod(da) > stod(db) ? a : (stod(da) == stod(db)) ? "None" : b;
    }
    return "None";
}
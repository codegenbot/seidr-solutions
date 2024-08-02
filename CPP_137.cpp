#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any(max(get<string>(a), get<string>(b)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any(max(get<double>(b), get<double>(a)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int aInt = get<int>(a);
        int bInt = get<int>(b);
        if (aInt > bInt)
            return a;
        else if (aInt < bInt)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double aDouble = get<double>(a);
        double bDouble = get<double>(b);
        if (aDouble > bDouble)
            return a;
        else if (aDouble < bDouble)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string aString = get<string>(a);
        string bString = get<string>(b);
        if (aString > bString)
            return a;
        else if (aString < bString)
            return b;
        else
            return boost::any("None");
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
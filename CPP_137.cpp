```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any(max(get<double>(a), get<string>(b)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any(max(get<string>(a), get<double>(b)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int aint = get<int>(a);
        int bint = get<int>(b);
        if (aint > bint)
            return a;
        else if (aint < bint)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double adouble = get<double>(a);
        double bdouble = get<double>(b);
        if (adouble > bdouble)
            return a;
        else if (adouble < bdouble)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string astr = get<string>(a);
        string bstr = get<string>(b);
        if (astr > bstr)
            return a;
        else if (astr < bstr)
            return b;
        else
            return boost::any("None");
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
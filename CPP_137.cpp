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
        if (get<int>(a) > get<int>(b))
            return a;
        else if (get<int>(a) < get<int>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (get<double>(a) > get<double>(b))
            return a;
        else if (get<double>(a) < get<double>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (get<string>(a) > get<string>(b))
            return a;
        else if (get<string>(a) < get<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
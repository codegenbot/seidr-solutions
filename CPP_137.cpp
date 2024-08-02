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
        return boost::any(max(get<double>(b), get<string>(a)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = get<int>(a);
        int y = get<int>(b);
        if(x > y)
            return a;
        else if(x < y)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = get<double>(a);
        double y = get<double>(b);
        if(x > y)
            return a;
        else if(x < y)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = get<string>(a);
        string y = get<string>(b);
        if(x > y)
            return a;
        else if(x < y)
            return b;
        else
            return boost::any("None");
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
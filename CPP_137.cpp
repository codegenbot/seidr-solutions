#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return max(b, a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
            return a;
        else if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
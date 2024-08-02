#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return any_cast<string>(a) > any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return any_cast<double>(b) > any_cast<double>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return x > y ? a : (x < y ? b : boost::any("None"));
    }
    else {
        throw invalid_argument("Invalid types");
    }
}
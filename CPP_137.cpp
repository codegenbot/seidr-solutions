#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a), fb = boost::any_cast<float>(b);
        return (fa > fb ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a), sb = boost::any_cast<string>(b);
        return (sa > sb ? a : b);
    }
    else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
             (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    else {
        float fa = boost::any_cast<float>(a), fb = boost::any_cast<float>(b);
        if (fa > fb)
            return a;
        else
            return b;
    }
}
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::lexical_cast<double>(a) > boost::lexical_cast<double>(b))
            return a;
        else if (boost::lexical_cast<double>(a) < boost::lexical_cast<double>(b))
            return b;
        else
            return boost::any("None");
    }
    else {
        double aDouble = boost::lexical_cast<double>(boost::any_cast<string>(a));
        double bDouble = boost::lexical_cast<double>(boost::any_cast<string>(b));
        if (aDouble > bDouble)
            return a;
        else if (aDouble < bDouble)
            return b;
        else
            return boost::any("None");
    }
}
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a, b);
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
            return a;
        else
            return b;
    } else if ((a.type() == typeid(string) && (b.type() == typeid(int) ||
                                               b.type() == typeid(float) || b.type() == typeid(double)))) {
        float a_val = 0, b_val = 0;
        try {
            a_val = boost::lexical_cast<float>(boost::any_cast<string>(a));
        } catch (...) {}
        try {
            b_val = boost::lexical_cast<float>(boost::any_cast<string>(b));
        } catch (...) {}
        if (a_val > b_val)
            return a;
        else
            return b;
    } else if ((b.type() == typeid(string) && (a.type() == typeid(int) ||
                                               a.type() == typeid(float) || a.type() == typeid(double)))) {
        float a_val = 0, b_val = 0;
        try {
            a_val = boost::lexical_cast<float>(boost::any_cast<string>(a));
        } catch (...) {}
        try {
            b_val = boost::lexical_cast<float>(boost::any_cast<string>(b));
        } catch (...) {}
        if (a_val > b_val)
            return a;
        else
            return b;
    }
    return boost::any("None");
}
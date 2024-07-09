#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/conversion.hpp>
#include <sstream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(max(static_cast<int>(a), static_cast<float>(b)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream iss(static_cast<string>(b));
        float b_float;
        iss >> b_float;
        return a > b_float ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (static_cast<string>(a) > static_cast<string>(b))
            return a;
        else if (static_cast<string>(a) < static_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        istringstream iss(static_cast<string>(b));
        int b_int;
        iss >> b_int;
        return a > b_int ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        istringstream iss(static_cast<string>(a));
        float a_float;
        iss >> a_float;
        return a_float > static_cast<float>(b) ? a : b;
    }
    else
        return boost::any("None");
}
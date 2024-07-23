#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    any_to_double(a, a);
    any_to_double(b, b);

    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return max(at<double>(a), at<double>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (at<string>(a) > at<string>(b)) ? a : ((at<string>(a) < at<string>(b)) ? b : boost::any("None")));
    } else {
        return boost::any("None");
    }
}

void any_to_double(boost::any& val, boost::any& result) {
    if (val.type() == typeid(double)) {
        result = val;
    } else if (val.type() == typeid(string)) {
        try {
            double d = boost::lexical_cast<double>(boost::any_cast<string>(val));
            result = boost::any(d);
        } catch (...) {
            // invalid conversion
        }
    }
}
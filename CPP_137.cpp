#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) && is_float(b)) {
        return (get<float>(a) > get<float>(b)) ? a : ((get<float>(a) == get<float>(b))) ? any("None") : b;
    }
    else if (is_float(a) || is_float(b)) {
        return (is_float(a)) ? a : b;
    }
    else if (is_string(a) && is_string(b)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        return (stof(sa) > stof(sb)) ? a : ((stof(sa) == stof(sb))) ? any("None") : b;
    }
    else if (is_string(a) || is_string(b)) {
        return (is_string(a)) ? a : b;
    }
    else {
        // Error handling
        return any("Invalid input");
    }
}
#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        std::string sa = get<std::string>(a);
        std::string sb = get<std::string>(b);
        if(stof(sa) > stof(sb))
            return a;
        else
            return b;
    } else if (!is_float(a) && !is_float(b)) {
        return "None";
    }
}
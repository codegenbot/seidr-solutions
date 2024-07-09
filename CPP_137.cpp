#include <boost/any.hpp>
#include <boost/convert.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        std::string sa = get<std::string>(a);
        std::string sb = get<std::string>(b);
        return stof(sa) > stof(sb) ? a : (stof(sa) == stof(sb) ? boost::any(std::to_string(stof(sa)) + " = " + std::to_string(stof(sb))) : b);
    } else {
        return boost::any("None");
    }
}
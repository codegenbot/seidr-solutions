```cpp
#include <boost/any.hpp>
#include <string>
#include <sstream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);
        if (std::stof(sa) > std::stof(sb))
            return a;
        else if (std::stof(sa) == std::stof(sb))
            return "None";
        else
            return b;
    } else {
        return "None";
    }
}
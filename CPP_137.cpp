#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return "None";
    
    if (any_cast<int>(a) > any_cast<int>(b))
        return a;
    else if (any_cast<float>(a) > any_cast<float>(b))
        return a;
    else if (any_cast<std::string>(a) > any_cast<std::string>(b))
        return a;
    
    if (any_cast<int>(b) > any_cast<int>(a))
        return b;
    else if (any_cast<float>(b) > any_cast<float>(a))
        return b;
    else if (any_cast<std::string>(b) > any_cast<std::string>(a))
        return b;
    
    return "None";
}
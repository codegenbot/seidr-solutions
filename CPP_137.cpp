#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return none;
    
    int i = any_cast<int>(a);
    float f = any_cast<float>(a);
    std::string s = any_cast<std::string>(a);

    if (i > any_cast<int>(b))
        return a;
    else if (f > any_cast<float>(b))
        return a;
    else if (s > any_cast<std::string>(b))
        return a;
    
    i = any_cast<int>(b);
    f = any_cast<float>(b);
    s = any_cast<std::string>(b);

    if (i > any_cast<int>(a))
        return b;
    else if (f > any_cast<float>(a))
        return b;
    else if (s > any_cast<std::string>(a))
        return b;
    
    return none;
}
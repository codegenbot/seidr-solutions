#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return none;
    
    int i1 = any_cast<int>(a);
    float f1 = any_cast<float>(a);
    std::string s1 = any_cast<std::string>(a);
    
    int i2 = any_cast<int>(b);
    float f2 = any_cast<float>(b);
    std::string s2 = any_cast<std::string>(b);
    
    if (i1 > i2) return a;
    else if (f1 > f2) return a;
    else if (s1 > s2) return a;
    
    if (i2 > i1) return b;
    else if (f2 > f2) return b;
    else if (s2 > s1) return b;
    
    return none;
}
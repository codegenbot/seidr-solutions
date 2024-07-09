#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return none;
    
    int ai = any_cast<int>(a);
    float af = any_cast<float>(a);
    std::string as = any_cast<std::string>(a);
    
    int bi = any_cast<int>(b);
    float bf = any_cast<float>(b);
    std::string bs = any_cast<std::string>(b);
    
    if (ai > bi) return a;
    else if (af > bf) return a;
    else if (as > bs) return a;
    
    if (bi > ai) return b;
    else if (bf > af) return b;
    else if (bs > as) return b;
    
    return none;
}
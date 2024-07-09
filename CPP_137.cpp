#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b))
        return boost::any("None");
    
    int intA = any_cast<int>(a);
    int intB = any_cast<int>(b);
    float floatA = any_cast<float>(a);
    float floatB = any_cast<float>(b);
    std::string strA = any_cast<std::string>(a);
    std::string strB = any_cast<std::string>(b);

    if (intA > intB) return a;
    else if (floatA > floatB) return a;
    else if (strA > strB) return a;
    
    if (intB > intA) return b;
    else if (floatB > floatB) return b;
    else if (strB > strA) return b;
    
    return boost::any("None");
}
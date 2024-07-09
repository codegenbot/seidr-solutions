#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return none;
    
    int int_a = any_cast<int>(a);
    int int_b = any_cast<int>(b);
    float float_a = any_cast<float>(a);
    float float_b = any_cast<float>(b);
    std::string str_a = any_cast<std::string>(a);
    std::string str_b = any_cast<std::string>(b);

    if (int_a > int_b) return a;
    else if (float_a > float_b) return a;
    else if (str_a > str_b) return a;

    if (int_b > int_a) return b;
    else if (float_b > float_b) return b;
    else if (str_b > str_a) return b;

    return none;
}
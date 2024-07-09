```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(std::string{}.type())) {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return (as <= bs ? a : b);
    }
    else if (is_any_of<a>(int().type())) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return (ai <= bi ? a : b);
    }
    else if (is_any_of<a>(double{}.type())) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return (ad <= bd ? a : b);
    }
}
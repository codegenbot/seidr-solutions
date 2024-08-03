Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((ai < bi) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : ((af < bf) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (as > bs) ? a : ((as < bs) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((ai < bf) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int ai = boost::any_cast<int>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (ai > lexical_cast<int>(bs)) ? a : ((ai < lexical_cast<int>(bs)) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((af < bi) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float af = boost::any_cast<float>(a);
        std::string bs = boost::any_cast<std::string>(b);
        return (af > lexical_cast<float>(bs)) ? a : ((af < lexical_cast<float>(bs)) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string as = boost::any_cast<std::string>(a);
        int bi = boost::any_cast<int>(b);
        return (lexical_cast<float>(as) > bi) ? a : ((lexical_cast<float>(as) < bi) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string as = boost::any_cast<std::string>(a);
        float bf = boost::any_cast<float>(b);
        return (lexical_cast<float>(as) > bf) ? a : ((lexical_cast<float>(as) < bf) ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}
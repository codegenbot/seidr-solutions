#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("int"))) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("float"))) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : ((bf > af) ? b : boost::any("None")));
    } else if (is_any_of<a>(std::string("string")) && is_any_of<b>(std::string("string"))) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (as > bs) ? a : ((bs > as) ? b : boost::any("None")));
    } else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("float"))) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (bf > ai) ? b : ((ai > bf) ? a : boost::any("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("int"))) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any("None")));
    } else if (is_any_of<a>(std::string("int")) && is_any_of<b>(std::string("string"))) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (bs > std::to_string(ai)) ? b : ((bs < std::to_string(ai)) ? a : boost::any("None")));
    } else if (is_any_of<a>(std::string("float")) && is_any_of<b>(std::string("string"))) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (bs > std::to_string(af)) ? b : ((bs < std::to_string(af)) ? a : boost::any("None")));
    } else if (is_any_of<a>(std::string("string")) && is_any_of<b>(std::string("int"))) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (as > std::to_string(bi)) ? a : ((as < std::to_string(bi)) ? b : boost::any("None")));
    } else if (is_any_of<a>(std::string("string")) && is_any_of<b>(std::string("float"))) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (as > std::to_string(bf)) ? a : ((as < std::to_string(bf)) ? b : boost::any("None")));
    }
    return a;
}
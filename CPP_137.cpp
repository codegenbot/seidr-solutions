#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a.convert_to<int>() > b.convert_to<float()) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a.convert_to<float>() > b.convert_to<int()) ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::lexical_cast<string>(a);
        string sb = boost::lexical_cast<string>(b);
        return stol(sa) > stol(sb) ? a : ((stol(sa) < stol(sb)) ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > boost::lexical_cast<int>(b) ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return boost::lexical_cast<int>(a) > b.convert_to<int()) ? a : "None";
    }
    return "None";
}
```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int))
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b)) ? b : boost::any("None");
    if ((a.type() == typeid(float) || a.type() == typeid(double)) && (b.type() == typeid(float) || b.type() == typeid(double)))
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b)) ? b : boost::any("None");
    if ((a.type() == typeid(string) || a.type() == typeid(wstring)) && (b.type() == typeid(string) || b.type() == typeid(wstring)))
        return (boost::lexical_cast<string>(boost::any_cast<any>(a)).compare(boost::lexical_cast<string>(boost::any_cast<any>(b))) > 0) ? a : ((boost::lexical_cast<string>(boost::any_cast<any>(a))).compare(boost::lexical_cast<string>(boost::any_cast<any>(b))) < 0) ? b : boost::any("None");
    if (a.type() == typeid(string) && b.type() != typeid(string))
        return (boost::lexical_cast<string>(boost::any_cast<any>(a)).compare(boost::lexical_cast<string>(boost::any_cast<int>(b))) > 0) ? a : ((boost::lexical_cast<string>(boost::any_cast<any>(a))).compare(boost::lexical_cast<string>(boost::any_cast<int>(b))) < 0) ? b : boost::any("None");
    if (a.type() != typeid(string) && b.type() == typeid(string))
        return (boost::lexical_cast<string>(boost::any_cast<any>(b)).compare(boost::lexical_cast<string>(boost::any_cast<int>(a))) > 0) ? b : ((boost::lexical_cast<string>(boost::any_cast<any>(b))).compare(boost::lexical_cast<string>(boost::any_cast<int>(a))) < 0) ? a : boost::any("None");
    return "None";
}
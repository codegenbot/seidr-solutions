#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a), fb = boost::any_cast<float>(b);
        return (fa > fb ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a), sb = boost::any_cast<string>(b);
        return (sa > sb ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a), af = boost::any_cast<float>(b);
        return (ai > af ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fa = boost::any_cast<float>(a), ai = boost::any_cast<int>(b);
        return (fa > ai ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string sa = boost::any_cast<string>(a), ai = boost::any_cast<int>(b);
        return (sa > to_string(ai) ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string sa = boost::any_cast<string>(a), af = boost::any_cast<float>(b);
        return (sa > to_string(af) ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a), sa = boost::any_cast<string>(b);
        return (to_string(ai) > sa ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a), sa = boost::any_cast<string>(b);
        return (boost::any_cast<float>(a) > stof(sa) ? a : b);
    }
    else {
        return boost::any("None");
    }
}
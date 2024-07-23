#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        return boost::any(b);
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
          b.type() == typeid(float))) {
        return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        int result = strcmp(strB.c_str(), strA.c_str());
        return (result > 0) ? b : a;
    } else {
        return "None";
    }
}
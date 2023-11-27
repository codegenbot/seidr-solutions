#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() != b.type()) {
        return boost::any();
    }

    if (a.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return boost::any(intA);
        } else if (intB > intA) {
            return boost::any(intB);
        }
    } else if (a.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return boost::any(floatA);
        } else if (floatB > floatA) {
            return boost::any(floatB);
        }
    } else if (a.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB) {
            return boost::any(strA);
        } else if (strB > strA) {
            return boost::any(strB);
        }
    }

    return boost::any();
}
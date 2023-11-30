#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intA < intB) {
            return intB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatA < floatB) {
            return floatB;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        float floatA, floatB;
        try {
            floatA = boost::lexical_cast<float>(strA);
            floatB = boost::lexical_cast<float>(strB);
        } catch (const boost::bad_lexical_cast&) {
            return boost::any("None");
        }
        if (floatA > floatB) {
            return boost::any(strA);
        } else if (floatA < floatB) {
            return boost::any(strB);
        }
    }
    return boost::any("None");
}
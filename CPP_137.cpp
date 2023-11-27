#include <boost/variant.hpp>

boost::variant<int, float, std::string> compare_one(boost::variant<int, float, std::string> a, boost::variant<int, float, std::string> b) {
    if (boost::get<int>(&a) && boost::get<int>(&b)) {
        int intA = boost::get<int>(a);
        int intB = boost::get<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intA < intB) {
            return intB;
        }
    } else if (boost::get<float>(&a) && boost::get<float>(&b)) {
        float floatA = boost::get<float>(a);
        float floatB = boost::get<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatA < floatB) {
            return floatB;
        }
    } else if (boost::get<std::string>(&a) && boost::get<std::string>(&b)) {
        std::string stringA = boost::get<std::string>(a);
        std::string stringB = boost::get<std::string>(b);
        float floatA, floatB;
        try {
            floatA = boost::lexical_cast<float>(stringA);
            floatB = boost::lexical_cast<float>(stringB);
        } catch (const boost::bad_lexical_cast&) {
            return "None";
        }
        if (floatA > floatB) {
            return stringA;
        } else if (floatA < floatB) {
            return stringB;
        }
    }
    return "None";
}
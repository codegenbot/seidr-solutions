#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB)
            return intA;
        else if (intB > intA)
            return intB;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB)
            return floatA;
        else if (floatB > floatA)
            return floatB;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a);
        std::string stringB = boost::any_cast<std::string>(b);
        float floatA = boost::lexical_cast<float>(stringA);
        float floatB = boost::lexical_cast<float>(stringB);
        if (floatA > floatB)
            return stringA;
        else if (floatB > floatA)
            return stringB;
    }
    return "None";
}
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intB > intA) {
            return intB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatB > floatA) {
            return floatB;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string stringA = boost::any_cast<string>(a);
        string stringB = boost::any_cast<string>(b);
        if (stringA > stringB) {
            return stringA;
        } else if (stringB > stringA) {
            return stringB;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string stringA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        float floatA = boost::lexical_cast<float>(stringA);
        if (floatA > intB) {
            return floatA;
        } else if (intB > floatA) {
            return intB;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int intA = boost::any_cast<int>(a);
        string stringB = boost::any_cast<string>(b);
        float floatB = boost::lexical_cast<float>(stringB);
        if (intA > floatB) {
            return intA;
        } else if (floatB > intA) {
            return floatB;
        }
    }
    return "None";
}
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
        stringA.erase(remove(stringA.begin(), stringA.end(), ','), stringA.end());
        stringB.erase(remove(stringB.begin(), stringB.end(), ','), stringB.end());
        float floatA = boost::lexical_cast<float>(stringA);
        float floatB = boost::lexical_cast<float>(stringB);
        if (floatA > floatB) {
            return stringA;
        } else if (floatB > floatA) {
            return stringB;
        }
    }
    return "None";
}
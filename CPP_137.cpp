#include <boost/any.hpp>
#include <iostream>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a),
            intB = boost::any_cast<int>(b);
        return (intA > intB) ? boost::any(intA) : boost::any(intB);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a),
            floatB = boost::any_cast<float>(b);
        return (floatA > floatB) ? boost::any(floatA) : boost::any(floatB);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a),
            stringB = boost::any_cast<std::string>(b);
        try {
            float floatA = std::stof(stringA),
                floatB = std::stof(stringB);
            return (floatA > floatB) ? boost::any(stringA) : boost::any(stringB);
        } catch (...) {
            return boost::any(std::string("None"));
        }
    }
    return boost::any(std::string("None"));
}
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return intA > intB ? intA : intB;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        return floatA > floatB ? floatA : floatB;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a);
        std::string stringB = boost::any_cast<std::string>(b);
        try {
            float floatA = boost::lexical_cast<float>(stringA);
            float floatB = boost::lexical_cast<float>(stringB);
            return floatA > floatB ? stringA : stringB;
        } catch (const boost::bad_lexical_cast&) {
            return std::string("None");
        }
    }
    return std::string("None");
}
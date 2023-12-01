#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);

        // Remove commas from strings
        strA.erase(std::remove(strA.begin(), strA.end(), ','), strA.end());
        strB.erase(std::remove(strB.begin(), strB.end(), ','), strB.end());

        // Convert strings to floats
        float floatA = boost::lexical_cast<float>(strA);
        float floatB = boost::lexical_cast<float>(strB);

        if (floatA > floatB) {
            return a;
        } else if (floatA < floatB) {
            return b;
        }
    }

    return boost::any();
}
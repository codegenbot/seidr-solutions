#include <boost/any.hpp>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() != b.type()) {
        return boost::any();
    }

    if (a.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intB > intA) {
            return intB;
        }
    } else if (a.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatB > floatA) {
            return floatB;
        }
    } else if (a.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);
        if (strA > strB) {
            return strA;
        } else if (strB > strA) {
            return strB;
        }
    }

    return boost::any();
}

int main() {
    boost::any a = 10;
    boost::any b = 20;
    boost::any result = compare_one(a, b);
    if (!result.empty()) {
        std::cout << "Comparison result: " << boost::any_cast<int>(result) << std::endl;
    } else {
        std::cout << "Comparison failed due to different types." << std::endl;
    }

    return 0;
}
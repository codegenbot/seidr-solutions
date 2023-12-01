#include <string>
#include <algorithm>
#include <boost/any.hpp>

template<typename T>
T compare_one(T a, T b) {
    return (a > b) ? a : b;
}

std::string compare_one(boost::any a, boost::any b) {
    std::string strA = boost::any_cast<std::string>(a);
    std::string strB = boost::any_cast<std::string>(b);
    std::replace(strA.begin(), strA.end(), ',', '.');
    std::replace(strB.begin(), strB.end(), ',', '.');

    try {
        float num1 = std::stof(strA);
        float num2 = std::stof(strB);
        return (num1 > num2) ? strA : strB;
    } catch (...) {
        // Handle the case where the cast or conversion failed.
        return "";
    }
}
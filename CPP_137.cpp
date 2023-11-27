#include <iostream>
#include <string>
#include <any>
#include <sstream>

template<typename T>
std::any lexical_cast(const std::string& str)
{
    std::stringstream ss(str);
    T result;
    if (!(ss >> result)) {
        return std::any();
    }
    return std::any(result);
}

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = std::any_cast<int>(a);
        int intB = std::any_cast<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intA < intB) {
            return intB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = std::any_cast<float>(a);
        float floatB = std::any_cast<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatA < floatB) {
            return floatB;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = std::any_cast<std::string>(a);
        std::string stringB = std::any_cast<std::string>(b);
        float floatA, floatB;
        try {
            floatA = std::any_cast<float>(lexical_cast<float>(stringA));
            floatB = std::any_cast<float>(lexical_cast<float>(stringB));
        } catch (const std::bad_any_cast&) {
            return std::any(std::string("None"));
        }
        if (floatA > floatB) {
            return std::any(stringA);
        } else if (floatA < floatB) {
            return std::any(stringB);
        }
    }
    return std::any(std::string("None"));
}
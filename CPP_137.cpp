#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(int)) {
        const int& intA = std::any_cast<const int&>(a);
        const int& intB = std::any_cast<const int&>(b);
        if(intA > intB)
            return a;
        else if(intA < intB)
            return b;
        else
            return 0;
    }
    else if(a.type() == typeid(float)) {
        const float& floatA = std::any_cast<const float&>(a);
        const float& floatB = std::any_cast<const float&>(b);
        if(floatA > floatB)
            return a;
        else if(floatA < floatB)
            return b;
        else
            return 0.0f;
    }
    else if(a.type() == typeid(std::string)) {
        const std::string& strA = std::any_cast<const std::string&>(a);
        const std::string& strB = std::any_cast<const std::string&>(b);
        if(strA > strB)
            return a;
        else if(strA < strB)
            return b;
        else
            return "";
    }

    return std::any(); // None
}
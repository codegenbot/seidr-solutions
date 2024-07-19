#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(int)) {
        if(std::any_cast<const int>(a) > std::any_cast<const int>(b))
            return a;
        else if(std::any_cast<const int>(a) < std::any_cast<const int>(b))
            return b;
        else
            return 0;
    }
    else if(a.type() == typeid(float)) {
        if(std::any_cast<const float>(a) > std::any_cast<const float>(b))
            return a;
        else if(std::any_cast<const float>(a) < std::any_cast<const float>(b))
            return b;
        else
            return 0.0f;
    }
    else if(a.type() == typeid(std::string)) {
        if(std::any_cast<const std::string>(a) > std::any_cast<const std::string>(b))
            return a;
        else if(std::any_cast<const std::string>(a) < std::any_cast<const std::string>(b))
            return b;
        else
            return "";
    }

    return std::any(); // None
}
#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(auto a_val = a.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : (std::any_cast<int>(a) < std::any_cast<int>(b) ? b : 0);
    }
    else if(auto a_val = a.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : (std::any_cast<float>(a) < std::any_cast<float>(b) ? b : 0.0f);
    }
    else if(auto a_val = a.type() == typeid(std::string)) {
        return std::any_cast<std::string>(a) > std::any_cast<std::string>(b) ? a : (std::any_cast<std::string>(a) < std::any_cast<std::string>(b) ? b : std::string(""));
    }

    return std::any();
}
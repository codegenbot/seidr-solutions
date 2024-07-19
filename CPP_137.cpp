#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : (std::any_cast<int>(a) < std::any_cast<int>(b) ? b : 0);
    }
    else if(a.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : (std::any_cast<float>(a) < std::any_cast<float>(b) ? b : 0.0f);
    }
    else if(a.type() == typeid(std::string)) {
        return std::any_cast<std::string>(a) > std::any_cast<std::string>(b) ? a : (std::any_cast<std::string>(a) < std::any_cast<std::string>(b) ? b : std::string(""));
    }

    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == ""s);

    return 0;
}
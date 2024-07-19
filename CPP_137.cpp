#include <any>
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
T compare_any(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? std::any_cast<int>(a) : std::any_cast<int>(b);
    }
    else if (a.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? std::any_cast<float>(a) : std::any_cast<float>(b);
    } else if (a.type() == typeid(std::string)) {
        float valA = std::stof(std::any_cast<std::string>(a).replace(std::any_cast<std::string>(a).find(','), 1, "."));
        float valB = std::stof(std::any_cast<std::string>(b).replace(std::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? std::any_cast<std::string>(a) : std::any_cast<std::string>(b);
    } else {
        return T();
    }
}

int main() {
    std::any a = 10;
    std::any b = 20;
    
    std::cout << std::any_cast<int>(compare_any<int>(a, b)) << std::endl;

    return 0;
}
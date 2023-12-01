#include <string>
#include <algorithm>

template<typename T>
T compare_one(T a, T b) {
    return (a > b) ? a : b;
}

std::string compare_one(std::string a, std::string b) {
    std::replace(a.begin(), a.end(), ',', '.');
    std::replace(b.begin(), b.end(), ',', '.');
    float num1 = std::stof(a);
    float num2 = std::stof(b);
    return (num1 > num2) ? a : b;
}
#include <string>
#include <algorithm>
#include <cassert>

template <typename T1, typename T2>
std::string compare_one(T1 a, T2 b) {
    std::string str_a = std::to_string(a);
    std::string str_b = std::to_string(b);
    std::replace(str_a.begin(), str_a.end(), ',', '.');
    std::replace(str_b.begin(), str_b.end(), ',', '.');
    float num1 = std::stof(str_a);
    float num2 = std::stof(str_b);
    return (num1 > num2) ? str_a : str_b;
}

int main() {
    assert(compare_one("1", 1) == "None");
    return 0;
}
#include <string>
#include <algorithm>
#include <cassert>

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

int main() {
    assert(compare_one(std::string("1"), 1) == "1");
    assert(compare_one("1", "2") == "2");
    assert(compare_one(3, 4) == 4);
    assert(compare_one(5.5, 6.7) == 6.7);
    return 0;
}
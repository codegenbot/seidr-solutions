#include <string>
#include <algorithm>
#include <cassert>

template <typename T>
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
    assert(compare_one(std::string("1"), std::string("1")) == "1");
    assert(compare_one(1, 2) == 2);
    assert(compare_one(2, 1) == 2);
    assert(compare_one(std::string("1.5"), std::string("2.3")) == "1.5");
    assert(compare_one(std::string("-1.5"), std::string("-2.3")) == "-1.5");
    assert(compare_one(std::string("3,14159"), std::string("2,71828")) == "3.14159");
    assert(compare_one(std::string("9,876,543,210"), std::string("1,234,567,890")) == "9.876.543.210");
    
    return 0;
}
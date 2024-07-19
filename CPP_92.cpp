```cpp
#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    return std::abs(a - static_cast<int>(a)) < 1e-9 &&
           std::abs(b - static_cast<int>(b)) < 1e-9 &&
           std::abs(c - static_cast<int>(c)) < 1e-9;
}

int main() {
    float a, b, c;
    std::cin >> std::ws; // ignore whitespace
    std::cin >> a >> b >> c;
    if(any_int(a, b, c))
        std::cout << "The numbers are integers: " << a << ", " << b << ", " << c << std::endl;
    else
        std::cout << "The numbers are not integers: " << a << ", " << b << ", " << c << std::endl;
    return 0;
}
```cpp
#include <iostream>
#include <assert.h>
#include <string>
#include <cmath>

bool any_int(float a, float b, float c) {
    int ai = static_cast<int>(a);
    int bi = static_cast<int>(b);
    int ci = static_cast<int>(c);

    if ((std::to_string(ai) == std::to_string(bi) + std::to_string(ci)) ||
        (std::to_string(ai) == std::to_string(bi) - std::to_string(ci)) ||
        (std::to_string(ai) == std::to_string(ci) + std::to_string(bi)) ||
        (std::to_string(ai) == std::to_string(ci) - std::to_string(bi)))
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
    if (any_int(1.0f, 2.0f, 3.0f)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
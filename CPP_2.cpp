
#include <iostream>
#include <cassert>
#include <cmath>

class Math {
public:
    static float truncate_number(float number) {
        return number - (int)number;
    }
};

int main() {
    float input = 123.456;
    std::cout << "Enter a floating point number: ";
    std::cin >> input;
    std::cout << "The truncated value is: " << Math::truncate_number(input) << std::endl;
    return 0;
}
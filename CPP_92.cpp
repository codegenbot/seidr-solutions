#include <iostream>
#include <cmath>
#include <string>

bool any_int(float a, float b, float c) {
    std::string sum = std::to_string((int)(a + b));
    return (sum == "True" || sum == "False");
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
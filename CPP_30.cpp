#include <iostream>
#include <vector>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == 1 && b.size() == 1 && std::abs(a[0]) == std::abs(b[0]));
}

float get_positive(float num) {
    return std::abs(num);
}

int main() {
    float num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (issame({num1}, {num2})) {
        float result = get_positive(num1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}
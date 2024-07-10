```cpp
#include <iostream>
#include <vector>
#include <sstream>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != 1 || b.size() != 1) {
        return false;
    }
    return a[0] == b[0];
}

float get_positive(float num) {
    return (num > 0.0f) ? num : -num;
}

int main() {
    float num1, num2;

    std::cout << "Enter the first number: ";
    std::stringstream ss;
    ss << "Enter the first number: ";
    if (!(ss >> num1)) {
        ss << "Invalid input for the first number." << std::endl;
        std::cerr << ss.str();
        return 1;
    }

    std::cout << "Enter the second number: ";
    ss.clear();
    ss << "Enter the second number: ";
    if (!(ss >> num2)) {
        ss << "Invalid input for the second number." << std::endl;
        std::cerr << ss.str();
        return 1;
    }

    if (isSame({num1}, {num2})) {
        float result = get_positive(num1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}
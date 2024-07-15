#include <iostream>
#include <string>

std::string compare(int a, int b) {
    return (a >= b) ? std::to_string(a) : std::to_string(b);
}

std::string compare(float a, float b) {
    return (a >= b) ? std::to_string(a) : std::to_string(b);
}

std::string compare(std::string a, std::string b) {
    return (std::stof(a) >= std::stof(b)) ? a : b;
}

int main() {
    std::string input1, input2;
    std::cin >> input1 >> input2;

    if (std::isdigit(input1[0])) {
        int int1 = std::stoi(input1);
        int int2 = std::stoi(input2);
        std::cout << compare(int1, int2) << std::endl;
    } else if (std::isdigit(input1[0])) {
        float float1 = std::stof(input1);
        float float2 = std::stof(input2);
        std::cout << compare(float1, float2) << std::endl;
    } else {
        std::cout << compare(input1, input2) << std::endl;
    }

    return 0;
}
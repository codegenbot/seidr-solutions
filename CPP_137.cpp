#include <iostream>
#include <string>
#include <algorithm>

std::string compare_one(std::string a, int b) {
    if (a > std::to_string(b)) {
        return a;
    } 
    else if (a < std::to_string(b)) {
        return std::to_string(b);
    }
    else {
        return "None";
    }
}

int main() {
    std::string inputA, inputB;
    int num;

    std::cout << "Enter the first value: ";
    std::cin >> inputA;

    std::cout << "Enter the second value: ";
    std::cin >> num;

    std::cout << compare_one(inputA, num) << std::endl;

    return 0;
}
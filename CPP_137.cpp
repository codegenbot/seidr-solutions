#include <iostream>
#include <string>
#include <vector>

std::string compare_one(const std::string& a, const std::string& b) {
    if (a == "0" && b == "0") {
        return "None";
    }
    
    int x = std::stoi(a);
    int y = std::stoi(b);

    if (x > y) {
        return a;
    } else if (x < y) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    std::string input1, input2;
    std::cout << "Enter the first number: ";
    std::cin >> input1;
    std::cout << "Enter the second number: ";
    std::cin >> input2;

    std::cout << compare_one(input1, input2) << std::endl;

    return 0;
}
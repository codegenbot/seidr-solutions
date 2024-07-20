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
    std::string input;
    int num;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Result: " << compare_one(input, num) << std::endl;

    return 0;
}
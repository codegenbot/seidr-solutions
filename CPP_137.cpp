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
        return a;
    }
}

int main() {
    std::string input;
    int num;

    std::cout << "Enter your string: ";
    std::getline(std::cin, input);

    std::cout << "Enter your number: ";
    std::cin >> num;

    std::cout << "The result is: " << compare_one(input, num) << std::endl;
    
    return 0;
}
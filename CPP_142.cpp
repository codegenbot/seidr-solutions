```cpp
#include <iostream>
#include <string>

int sum_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main2() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (!input.empty()) {
        try {
            int num = std::stoi(input);
            std::cout << "Sum of squares is: " << sum_squares(num) << std::endl;
        } catch (std::invalid_argument& e) {
            std::cout << "Please enter a valid integer.\n";
        }
    } else {
        std::cout << "Please enter a string.\n";
    }
    return 0;
}
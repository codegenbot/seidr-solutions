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
    std::cin >> input;
    if (!input.empty()) {
        std::cout << "Sum of squares is: " << sum_squares(std::stoi(input)) << std::endl;
    } else {
        std::cout << "Please enter a valid integer.\n";
    }
    return 0;
}
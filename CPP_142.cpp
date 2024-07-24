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
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input); 
    int n = std::stoi(input); 

    if (n > 0) {
        std::cout << "Sum of squares is: " << sum_squares(n) << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }
    return 0;
}
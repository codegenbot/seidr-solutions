#include <iostream>
#include <vector>

int run() {
    std::vector<int> input;
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    input.push_back(num1);
    input.push_back(num2);

    return 0;
}
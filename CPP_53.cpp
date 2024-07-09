#include <iostream>
#include <string>

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

int mainProblem() { 
    int num1;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    int num2;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    int result = add(num1, num2);
    std::string strResult = std::to_string(result);  
    std::cout << "Their sum is: " << strResult << std::endl; 
    return 0;
}
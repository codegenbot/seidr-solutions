```cpp
#include <iostream>
#include <string>

int choose_num(std::string s1, std::string s2) {
    if (std::stoi(s1) > std::stoi(s2))
        return std::stoi(s1);
    else
        return std::stoi(s2);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    std::cout << "Result: " << (num1 > num2 ? num1 : num2) << std::endl;
    if(result == num1)
        std::cout << "Greater number is " << num1 << std::endl;
    else
        std::cout << "Greater number is " << num2 << std::endl;
    return 0;
}
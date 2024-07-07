```cpp
#include <iostream>
#include <string>

int choose_num(int, int);

int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }
    int result = choose_num(std::to_string(num1), std::to_string(num2));
    std::cout << "Result: " << (num1 > num2 ? num1 : num2) << std::endl;
    if(result == std::stoi(std::to_string(num1)))
        std::cout << "Greater number is " << num1 << std::endl;
    else
        std::cout << "Greater number is " << num2 << std::endl;
    return 0;
}

int choose_num(int, int) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
```cpp
#include <iostream>
#include <string>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }
    std::cout << "Result: ";    
    if (num1 > num2)
        std::cout << num1;
    else
        std::cout << num2;

    std::cout << std::endl;
    return 0;
}
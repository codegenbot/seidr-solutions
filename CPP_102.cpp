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
    int result = (num1 > num2) ? num1 : num2;
    std::cout << "Result: " << result << std::endl;
    if(result == num1)
        std::cout << "Greater number is " << num1 << std::endl;
    else
        std::cout << "Greater number is " << num2 << std::endl;
    return 0;
}
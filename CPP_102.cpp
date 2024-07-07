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
    int result = choose_num(num1, num2);
    std::cout << "Result: " << (num1 > num2 ? std::to_string(num1) : std::to_string(num2));
    std::cout << std::endl;
    return 0;
}

int choose_num(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
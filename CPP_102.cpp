```cpp
#include <iostream>
#include <string>

int choose_num(int, int);

int main() {
    std::string num1Str, num2Str;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::cin >> num1Str >> num2Str)) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; // Return with error code
    }
    int num1 = std::stoi(num1Str);
    int num2 = std::stoi(num2Str);
    int result = choose_num(num1, num2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

int choose_num(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
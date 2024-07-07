```cpp
#include <iostream>
#include <string>
#include <sstream>

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return (x > y) ? x : y;
    } else if (x % 2 == 0) {
        return x;
    } else if (y % 2 == 0) {
        return y;
    }
    return -1;
}

int main() {
    int num1, num2;
    std::string input;
    std::cout << "Enter two numbers (separated by a space): ";
    getline(std::cin, input);
    std::istringstream iss(input);
    if (!(iss >> num1 >> num2)) {
        std::cout << "Invalid input. Please enter two integers separated by a space." << std::endl;
        return 1;
    }
    int result = choose_num(num1, num2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
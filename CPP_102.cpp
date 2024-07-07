```
#include <iostream>
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
    std::cout << "Enter two numbers (separated by a space): ";
    std::string input;
    std::cin >> input;
    int num1 = std::stoi(input.substr(0, input.find(' ')));
    int num2 = std::stoi(input.substr(input.find(' ') + 1));
    int result = choose_num(num1, num2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
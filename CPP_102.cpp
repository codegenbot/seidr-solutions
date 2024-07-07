```cpp
#include <iostream>
#include <string>

int choose_num(std::string s1, std::string s2) {
    int num1 = std::stoi(s1);
    int num2 = std::stoi(s2);
    return (num1 > num2) ? num1 : num2;
}

int main() {
    std::cout << "Enter two numbers (separated by a space): ";
    while (!(std::cin >> s1 >> s2)) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        std::cin.clear();  // clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ignore all remaining characters
    }
    int result = choose_num(s1, s2);
    std::cout << "Result: " << result << std::endl;
    int num = (std::stoi(s1) > std::stoi(s2)) ? std::stoi(s1) : std::stoi(s2);
    std::cout << "Greater number is " << (num == std::stoi(s1) ? s1 : s2) << std::endl;
    return 0;
}
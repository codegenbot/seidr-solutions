#include <iostream>
#include <string>

int choose_num(std::string s1, std::string s2) {
    int num1 = std::stoi(s1);
    int num2 = std::stoi(s2);
    return (num1 > num2) ? num1 : num2;
}

int main() {
    std::cout << "Enter two numbers (separated by a space): ";
    std::string s1, s2;

    if (!(std::cin >> s1 >> s2)) {  
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }

    int result = choose_num(s1, s2);
    std::cout << "Result: " << result << std::endl;

    if (std::stoi(s1) > std::stoi(s2)) {
        std::cout << "Greater number is " << s1 << std::endl;
    } else {
        std::cout << "Greater number is " << s2 << std::endl;
    }
    return 0;
}
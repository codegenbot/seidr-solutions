```cpp
#include <iostream>
#include <string>

int choose_num(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() { 
    std::string input;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::getline(std::cin, input))) {  
        std::cout << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }

    size_t pos = input.find(' ');
    if(pos == std::string::npos) {
        std::cout << "Invalid input. Please enter two integers." << std::endl;
        return 1;
    }
    
    std::string s1 = input.substr(0, pos);
    input.erase(0, pos + 1); 
    std::string s2 = input;

    int num1 = std::stoi(s1);
    int num2 = (s2.empty()) ? num1 : std::stoi(s2);

    if(num1 > num2)
        std::cout << "Greater number is " << std::to_string(choose_num(num1, num2)) << std::endl;
    else
        std::cout << "Greater number is " << std::to_string(choose_num(num1, num2)) << std::endl;

    return 0;
}
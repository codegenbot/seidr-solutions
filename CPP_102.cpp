#include <iostream>
#include <string>

int choose_num(std::string s1, std::string s2) {
    int num1 = std::stoi(s1);
    int num2 = std::stoi(s2);
    return (num1 > num2) ? num1 : num2;
}

int main() { 
    std::string line;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::getline(std::cin, line))) {  
        std::cout << "Invalid input. Please enter two integers." << std::endl;
        return 1; 
    }

    size_t pos = line.find(' ');
    if(pos == std::string::npos) {
        std::cout << "Invalid input. Please enter two integers." << std::endl;
        return 1;
    }
    
    std::string s1 = line.substr(0, pos);
    std::string s2 = line.substr(pos + 1);

    int num1 = std::stoi(s1);
    int num2 = std::stoi(s2);

    if(num1 > num2)
        std::cout << "Greater number is " << choose_num(s1, s2) << std::endl;
    else
        std::cout << "Greater number is " << choose_num(s1, s2) << std::endl;

    return 0;
}
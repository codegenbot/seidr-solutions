#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    std::string result = "";
    for (char c : s) {
        if (std::isupper(c)) {
            sum += tolower(c) - 'a' + 1;
            result.push_back((sum % 26) + 'a' - 1); 
        }
    }
    return std::stoi(result);
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int output = digitSum(s);
    std::cout << "The sum of corresponding ASCII values is: " << output << std::endl;
    return 0;
}
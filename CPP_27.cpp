#include <iostream>
#include <string>
#include <cassert>

std::string filp_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result += (char)(str[i] | 32);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    assert(input == filp_case(input));
    std::cout << "Result: " << filp_case(input) << std::endl;  
    return 0;
}
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    bool result = false;
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            count++;
        } else if ((str[i] == ')' && count > 0) ||
                   (str[i] == ']' && count > 1) ||
                   (str[i] == '}' && count > 2)) {
            count--;
        }
        
        if (count == 0) {
            result = true;
            break;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}
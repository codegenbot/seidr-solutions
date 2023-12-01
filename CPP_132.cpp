#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '[') {
            count++;
        } else if(str[i] == ']') {
            count--;
        }
        if(count < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "Is the string nested? " << (is_nested(input) ? "Yes" : "No") << std::endl;
    return 0;
}
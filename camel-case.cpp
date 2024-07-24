#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    for(int i=0;i<10;i++){
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        if(input.size()>1){
            std::cout << "camelCase: " << camelCase(input) << std::endl;
        }
    }
    return 0;
}
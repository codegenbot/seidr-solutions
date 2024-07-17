#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output = "";
    bool firstWord = true;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '-') {
            output += (firstWord ? "" : Uppercase(input[i + 1]));
            i++;
            firstWord = false;
        } else if (input[i] == ' ') {
            output += Uppercase(input[i]);
            firstWord = true;
        } else {
            if (!firstWord) {
                output += Uppercase(input[i]);
            } else {
                output += input[i];
            }
        }
    }
    
    return output;
}

char Uppercase(char c) {
    return (c >= 'a' && c <= 'z') ? (c - 32) : c;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}
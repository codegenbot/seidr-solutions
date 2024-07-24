Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            firstWord = false;
            continue;
        }
        if (!firstWord) {
            result[0] = toupper(result[0]);
        }
        result += c;
        firstWord = true;
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}
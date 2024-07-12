#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
        result += c;
    }
    return result;
}

std::cout << encrypt(std::string(input)) << std::endl;
```c++
#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool nextIsCap = true;
    
    for (char c : str) {
        if (c == '-') {
            nextIsCap = true;
        } else if (c == ' ') {
            nextIsCap = true;
        } else {
            if(nextIsCap)
                result += toupper(c);
            else
                result += tolower(c);
            nextIsCap = false;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}
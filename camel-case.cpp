#include <iostream>
#include <string>
#include <algorithm>

std::string camelCase(const std::string& s) {
    s.erase(remove(s.begin(), s.end(), '-'), s.end()); 

    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') { 
            capitalize = true;
        } else {
            capitalize ? result += toupper(c) : result += tolower(c); 
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}
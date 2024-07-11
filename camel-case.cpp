#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : s.split(" ")) { 
        for (char c : word) {
            if (!first)
                result += toupper(c); 
            else 
                result += tolower(c);
            first = false; 

            if (c != '-')  // Ignore '-' characters when converting to camelCase
                continue;
        }
        first = true; // Reset the flag for each word
    }

    return result;
}

int main() {
    std::string s;
    while (std::getline(std::cin, s)) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}
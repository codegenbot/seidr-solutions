```
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

int countDistinctCharacters(const std::string& str) {
    bool seen[256] = {false}; // assume ASCII

    for (int i = 0; i < str.length(); ++i) {
        char c = tolower((unsigned char)str[i]);
        if (!std::isalpha(c)) {
            continue; 
        }
        if (!seen[c]) {
            seen[c] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 256; ++i) {
        if (seen[i]) {
            ++count;
        }
    }

    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    while ((std::cin >> std::ws).peek() == '\n') 
        std::cin.ignore();
    char buffer[256]; // or any size that fits your needs
    std::cin.getline(buffer, 256); 
    str = std::string(buffer);
    int result = countDistinctCharacters(str);
    return 0;
}
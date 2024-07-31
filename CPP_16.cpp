#include <cctype>
#include <cstring>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    while (std::cin.peek() == '\n') 
        std::cin.ignore();
    char buffer[256]; // or any size that fits your needs
    std::cin.getline(buffer, 256); 
    str = std::string(buffer);
    int result = count_distinct_characters(str);
    return 0;
}

int count_distinct_characters(const std::string& str) {
    bool seen[256] = {false}; 

    for (int i = 0; i < str.length(); ++i) {
        char c = tolower(str[i]);
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
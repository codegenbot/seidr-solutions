#include <cctype>
#include <cassert>
#include <string>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str[str.size() - 1];
    return std::isalpha(lastChar);
}

int main() {
    std::cout << "Enter a string: ";
    std::string line; 
    std::getline(std::cin, line); 

    size_t pos = 0;
    while (pos < line.size() && std::isspace(line[pos])) {
        ++pos;
    }
    
    if (pos == line.size())
        line.clear();
    else
        line.erase(pos, 1);
    
    if (check_if_last_char_is_a_letter(line)) {
        std::cout << "The last character of the input string is a letter.\n";
    } else {
        std::cout << "The last character of the input string is not a letter.\n";
    }
}
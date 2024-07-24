#include <cctype>
#include <cassert>
#include <string>
#include <iostream>
#include <algorithm>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str.back();
    return std::isalpha(lastChar);
}

size_t find_first_non_space_char(const std::string& line) {
    size_t pos = 0;
    while (pos < line.size() && std::isspace(line[pos])) {
        ++pos;
    }
    return pos;
}

int main() {
    std::cout << "Enter a string: ";
    std::string line; getline(std::cin, line); 
    size_t pos = find_first_non_space_char(line);
    if (pos == line.size())
        line.clear();
    else
        line.erase(pos, 1);
    if (check_if_last_char_is_a_letter(line))
        std::cout << "The last character of the input string is a letter.\n";
    else
        std::cout << "The last character of the input string is not a letter.\n";
    return 0;
}
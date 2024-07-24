#include <cctype>
#include <cassert>
#include <string>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str.back();
    return std::isalpha(lastChar);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true); 
    std::cout << "Check if the last character of a string is a letter: ";
    std::string line; getline(std::cin, line);
    size_t pos = std::distance(line.begin(), std::find_if_not(line.begin(), line.end(), [](char c){return std::isspace(c);}));
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
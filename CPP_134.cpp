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

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true); 
    std::cout << "Check if the last character of a string is a letter: ";
    std::string line; getline(std::cin, line); std::string input = line;
    size_t pos = std::distance(input.begin(), std::find_if_not(input.begin(), input.end(), [](char c){return std::isspace(c);}));
    if (pos == input.size())
        input.clear();
    else
        input.erase(pos, 1);
    if (check_if_last_char_is_a_letter(input))
        std::cout << "The last character of the input string is a letter.\n";
    else
        std::cout << "The last character of the input string is not a letter.\n";
    return 0;
}
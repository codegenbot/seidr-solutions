```cpp
#include <cctype>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str.back();
    return std::isalpha(lastChar);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true); 
    std::cout << "Check if the last character of a string is a letter: ";
    std::string input;
    getline(std::cin, input); 
    input.erase(input.begin(), input.end());
    while (input.find_first_not_of(" ") != std::string::npos) {
        if (input[0] == ' ')
            input.erase(0, 1);
        else
            break;
    }
    if (check_if_last_char_is_a_letter(input))
        std::cout << "The last character of the input string is a letter.\n";
    else
        std::cout << "The last character of the input string is not a letter.\n";
    return 0;
}
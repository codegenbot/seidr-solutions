#include <iostream>
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    bool result = check_if_last_char_is_a_letter(input);
    std::cout << "Result: " << std::boolalpha << result << std::endl;

    return 0;
}
#include <iostream>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.length() - 1) return true;
    }
    return false;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << (check_if_last_char_is_a_letter(input) ? "true" : "false") << std::endl;
    return 0;
}
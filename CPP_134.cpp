#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& text) {
    if (text.empty()) {
        return false;
    }
    
    char lastChar = text.back();
    
    if (isalpha(lastChar)) {
        int i = text.size() - 2;
        while (i >= 0 && text[i] != ' ') {
            i--;
        }
        if (i >= 0 && text[i] == ' ') {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (check_if_last_char_is_a_letter(input)) {
        std::cout << "Last character is a letter and there is a space before it." << std::endl;
    } else {
        std::cout << "Either the last character is not a letter or there is no space before it." << std::endl;
    }

    return 0;
}
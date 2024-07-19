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
    std::string input_text;
    std::getline(std::cin, input_text);
    
    if (check_if_last_char_is_a_letter(input_text)) {
        std::cout << "Last character is a letter preceded by a space." << std::endl;
    } else {
        std::cout << "Last character is not a letter or not preceded by a space." << std::endl;
    }
    
    return 0;
}
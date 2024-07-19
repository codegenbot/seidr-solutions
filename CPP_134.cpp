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
    
    assert(check_if_last_char_is_a_letter(input_text));
    
    return 0;
}
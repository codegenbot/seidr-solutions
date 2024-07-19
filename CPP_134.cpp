#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& input) {
    if (input.empty()) {
        return false;
    }
    
    char lastChar = input.back();
    
    if (isalpha(lastChar)) {
        int i = input.size() - 2;
        while (i >= 0 && input[i] != ' ') {
            i--;
        }
        if (i >= 0 && input[i] == ' ') {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::string text = "Sample input text"; // Example input text
    bool result = check_if_last_char_is_a_letter(text);
    
    return 0;
}
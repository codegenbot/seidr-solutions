#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) {
        return false;
    }
    
    char lastChar = str.back();
    
    if (isalpha(lastChar)) {
        int i = str.size() - 2;
        while (i >= 0 && str[i] != ' ') {
            i--;
        }
        if (i >= 0 && str[i] == ' ') {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::string txt = "Your input string here";
    assert(check_if_last_char_is_a_letter(txt));
    
    return 0;
}
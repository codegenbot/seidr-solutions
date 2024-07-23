#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& str);

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}

bool check_if_last_char_is_a_letter(const std::string& str) {
    if(str.length() > 0) {
        char lastChar = str.back();
        return (!isalpha(lastChar));
    }
    return true;
}
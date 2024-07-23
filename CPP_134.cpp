#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(std::string str) {
    if(str.empty()) return false;
    char lastChar = str.back();
    return (!isalnum(lastChar));
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}
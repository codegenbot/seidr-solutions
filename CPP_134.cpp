```cpp
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(std::string str) {
    if(str.empty()) {
        return false;
    }
    char last_char = str.back();
    return (last_char >= 'a' && last_char <= 'z') || (last_char >= 'A' && last_char <= 'Z');
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}
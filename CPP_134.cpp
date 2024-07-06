```cpp
#include <iostream>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    int lastCharIndex = txt.length() - 1;
    char lastChar = txt[lastCharIndex];
    return (isalpha(lastChar) && !isalnum(lastChar));
}

int main() {
    std::cout << std::boolalpha;
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}
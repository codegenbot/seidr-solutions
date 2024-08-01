```cpp
#include <cstddef>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    size_t pos = txt.find_last_of(" ");
    if (pos == std::string::npos) return false;
    return isalpha(txt[pos]);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}
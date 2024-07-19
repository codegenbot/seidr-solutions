#include <cstddef>
#include <string>
#include <cctype>

int check_if_last_char_is_a_letter(const std::string& txt) {
    size_t pos = txt.find_last_of(" ");
    return pos == std::string::npos || !std::isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == 0);
    // ...
}
```cpp
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const char* txt) {
    if (*txt == '\0') return false;
    bool containsNonSpace = false;
    while (*txt != '\0') {
        if (!std::isspace(*txt)) {
            containsNonSpace = true;
            break;
        }
        ++txt;
    }
    return containsNonSpace && std::isalpha(*txt);
}

int main() {
    const char* txt = "apple pi e ";
    assert(!check_if_last_char_is_a_letter(txt));
}
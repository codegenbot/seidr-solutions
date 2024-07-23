#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(const char* txt) {
    if(*txt == '\0') return false;
    bool containsNonSpace = false;
    while (*txt != '\0') {
        if(!std::isspace((unsigned char)*txt)) {
            containsNonSpace = true;
            break;
        }
        txt++;
    }
    return containsNonSpace && std::isalpha((unsigned char)txt ? *txt : ' ');
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}
```cpp
#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    bool containsNonSpace = false;
    for(int i = 0; i < txt.length(); i++) {
        if(!std::isspace((char)txt[i])) {
            containsNonSpace = true;
            break;
        }
    }
    return containsNonSpace && std::isalpha(std::tolower(txt.back()));
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}
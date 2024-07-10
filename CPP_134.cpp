#include <cassert>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) return false;
    char last_char = txt.back();
    if (std::isalpha(last_char)) {
        if (txt.find_last_of(" ") == txt.size() - 1) return true;
    }
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}
#include <string>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt){
    if (txt.empty() || txt.back() == ' ') return false;
    size_t lastSpace = txt.find_last_of(' ');
    return std::isalpha(txt.back()) && (lastSpace == std::string::npos || lastSpace == txt.length() - 2);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    return 0;
}
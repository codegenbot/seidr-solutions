#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back(); 
    return !std::isalnum(lastChar); 
}
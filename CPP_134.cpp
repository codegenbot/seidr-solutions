#include <string>
#include <algorithm>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    std::string lastChar = txt.substr(txt.length()-1, 1);
    return (std::isalpha(lastChar[0])) && (!std::any_of(std::istospace(), txt.begin(), txt.end()));
}
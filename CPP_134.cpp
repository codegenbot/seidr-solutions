#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    bool isLastCharLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z');
    return !isLastCharLetter || (!ispunct(lastChar) && !isspace(lastChar));
}
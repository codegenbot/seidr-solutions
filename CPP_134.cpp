#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false; 
    char lastChar = txt.back(); 
    bool isLetter = (lastChar >= 'a' && lastChar <= 'z') || (lastChar >= 'A' && lastChar <= 'Z'); 
    bool isPartOfWord = false;
    for(int i = 0; i < txt.length() - 1; i++) { 
        if(txt[i] == ' ') {
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord;
}
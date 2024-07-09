#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false; 
    for(int i = 0; i < txt.length(); i++) {
        if(i == txt.length() - 1 && isalpha(txt[i])) return true; 
        else if(!isblank(txt[i])) break; 
    }
    return false;
}
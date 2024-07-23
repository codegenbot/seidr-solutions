#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    for(int i = 0; i < txt.length() - 1; i++) {
        if(!isspace(txt[i])) return false;
    }
    char lastChar = txt.back();
    return isalpha(lastChar);
}
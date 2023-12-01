#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt){
    assert(txt.length() >= 0);
    
    char lastChar = txt[txt.length() - 1];
    
    if(isalpha(lastChar)){
        // Check if the last character is not part of a word
        for(int i = txt.length() - 2; i >= 0; i--){
            if(isspace(txt[i])){
                return true;
            }
        }
        return false;
    }
    
    return false;
}
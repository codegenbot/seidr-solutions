#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt){
    assert(!txt.empty());

    char lastChar = txt.back();

    if(isalpha(lastChar)){
        for(int i = txt.length() - 2; i >= 0; i--){
            if(isspace(txt[i])){
                return true;
            }
        }
        return false;
    }

    return false;
}
#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    int n = txt.length();
    if(n == 0) {
        return false;
    }
    char lastChar = txt[n-1];
    if(isalpha(lastChar)) {
        if(lastChar == ' ') {
            return true;
        }
        else {
            int i = n-2;
            while(i >= 0 && txt[i] != ' ') {
                i--;
            }
            if(i < 0) {
                return true;
            }
        }
    }
    return false;
}
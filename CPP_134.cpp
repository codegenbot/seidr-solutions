#include <cassert>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt){
    if(txt.empty()){
        return false;
    }
    int n = txt.length();
    char lastChar = txt[n-1];
    if(isalpha(lastChar)){
        if(txt[n-2] == ' '){
            return true;
        }
    }
    return false;
}

int main() {
    assert (check_if_last_char_is_a_letter("apple pie") == false);
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);
    assert (check_if_last_char_is_a_letter("apple pi e") == true);

    return 0;
}
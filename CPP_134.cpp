#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.length()-1) return true;
    }
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("Hello World") == true);
    assert(check_if_last_char_is_a_letter("Hello World!") == false);
    assert(check_if_last_char_is_a_letter("") == false);

    return 0;
}
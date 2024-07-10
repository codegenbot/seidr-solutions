#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(' ') == txt.size()-1) return true;
    }
    return false;
}

int unique_main_function_name() {
    std::string input_str = "apple pi e ";
    assert(check_if_last_char_is_a_letter(input_str) == false);
    return 0;
}
#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if(txt.empty()) return false;
    if(isalpha(txt.back()) && (txt.size() == 1 || !isspace(txt[txt.size() - 2])) {
        return true;
    }
    return false;
}

int unique_main_function_name() {
    std::string input_str = "apple pi e ";
    assert(check_if_last_char_is_a_letter(input_str) == true);
    return 1;
}
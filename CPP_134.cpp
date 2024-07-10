#include <string>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty()) {
        return false;
    }
    
    std::string trimmed_txt = txt;
    trimmed_txt.erase(trimmed_txt.find_last_not_of(' ') + 1);

    return !trimmed_txt.empty() && isalpha(trimmed_txt.back());
}

int unique_main_function_name() {
    std::string input_str = "apple pi e ";
    assert(check_if_last_char_is_a_letter(input_str) == true);
    return 1;
}
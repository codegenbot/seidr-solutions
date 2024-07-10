#include <string>
#include <cctype> // Include the required header file
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if(txt.empty()) return false;
    if(std::isalpha(txt.back()) && (txt.size() == 1 || txt[txt.size()-2] == ' ')) { // Update isalpha to std::isalpha
        return true;
    }
    return false;
}

int unique_main_function_name() {
    std::string input_str = "apple pi e ";
    assert(check_if_last_char_is_a_letter(input_str) == true);
    return 1;
}
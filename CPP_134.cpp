#include <string>
#include <cassert>
#include <cctype>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    std::string trimmed_txt = txt;
    trimmed_txt.erase(trimmed_txt.find_last_not_of(' ') + 1);

    return !trimmed_txt.empty() && isalpha(trimmed_txt.back());
}

int unique_main_function_name() {
    std::string input_str;
    std::getline(std::cin, input_str);

    while (!input_str.empty() && input_str.back() == ' ') {
        input_str.pop_back();
    }

    assert(check_if_last_char_is_a_letter(input_str) == true);
    return 1;
}
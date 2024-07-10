#include <string>
#include <cassert>
#include <cctype>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    if (txt.empty()) {
        return false;
    }

    for (unsigned int i = txt.size() - 1; i >= 0u; --i) {
        if (isalpha(txt[i])) {
            return true;
        }
        if (!isspace(txt[i])) {
            return false;
        }
    }

    return false;
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
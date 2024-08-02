#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(std::string text) {
    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            for (size_t j = i + 1; j < text.size() && text[j] == ' '; ++j) {
                text[j] = '-';
                ++count;
            }
            if (count > 2) {
                for (size_t k = i + 1; k < text.size() && text[k] == '-'; ++k) {
                    text[k] = '-';
                }
            }
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
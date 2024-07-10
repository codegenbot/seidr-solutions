#include <iostream>
#include <cassert>

std::string fix_spaces(std::string text) {
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ' && i + 2 < text.length() && text[i + 1] == ' ' && text[i + 2] == ' ') {
            text.replace(i, 3, "-");
        } else if (text[i] == ' ') {
            text[i] = '_';
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
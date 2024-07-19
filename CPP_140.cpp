#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == ' ' && i + 2 < text.length() && text[i + 1] == ' ' && text[i + 2] == ' ') {
            text.replace(text.begin() + i, text.begin() + i + 3, "-");
        } else if (text[i] == ' ') {
            text[i] = '-';
        }
    }
    return text;
}
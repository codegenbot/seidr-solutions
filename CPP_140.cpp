#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result;
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ' && i + 2 < text.length() && text[i + 1] == ' ' && text[i + 2] == ' ') {
            result += '-';
            i += 2;
        } else if (text[i] == ' ') {
            result += '_';
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string modified_text = text;
    for (int i = 0; i < modified_text.length(); ++i) {
        if (modified_text[i] == ' ' && i + 2 < modified_text.length() && modified_text[i + 1] == ' ' && modified_text[i + 2] == ' ') {
            modified_text.replace(i, 3, "-");
        } else if (modified_text[i] == ' ') {
            modified_text[i] = '_';
        }
    }
    return modified_text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
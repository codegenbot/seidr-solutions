#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string modified_text = text;
    for (int i = 0; i < modified_text.size(); ++i) {
        if (modified_text[i] == ' ') {
            if (i + 2 < modified_text.size() && modified_text[i + 1] == ' ' && modified_text[i + 2] == ' ') {
                modified_text.replace(i, modified_text.find_first_not_of(' ', i + 1) - i, "-");
            } else {
                modified_text[i] = '_';
            }
        }
    }
    return modified_text;
}

int main() {
    assert (fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string updated_text = text;
    for (int i = 0; i < updated_text.length(); ++i) {
        if (updated_text[i] == ' ' && i + 2 < updated_text.length() && updated_text[i + 1] == ' ' && updated_text[i + 2] == ' ') {
            updated_text.replace(i, 3, "-");
        } else if (updated_text[i] == ' ') {
            updated_text[i] = '_';
        }
    }
    return updated_text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    std::cout << "All test cases pass!" << std::endl;
    return 0;
}
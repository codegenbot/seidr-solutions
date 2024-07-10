#include <iostream>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = text;
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == ' ') {
            if (i + 2 < result.size() && result[i + 1] == ' ' && result[i + 2] == ' ') {
                result.replace(i, result.find_first_not_of(' ', i + 1) - i, "-");
            } else {
                result[i] = '_';
            }
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
}
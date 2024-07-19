#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = text;
    for (int i = 0; i < result.length(); ++i) {
        if (result[i] == ' ' && i + 2 < result.length() && result[i + 1] == ' ' && result[i + 2] == ' ') {
            result.replace(i, 3, "-");
        } else if (result[i] == ' ') {
            result[i] = '_';
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
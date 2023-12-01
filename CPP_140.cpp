#include <string>
#include <cassert>

std::string fix_spaces(std::string text) {
    std::string result = "";
    int consecutive_spaces = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            consecutive_spaces++;

            if (consecutive_spaces > 2) {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
            consecutive_spaces = 0;
        }
    }

    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
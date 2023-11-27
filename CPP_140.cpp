#include <string>

std::string fix_spaces(std::string text);

int main() {
    std::string result = fix_spaces("   Exa 1 2 2 mple");
    return 0;
}

std::string fix_spaces(std::string text) {
    std::string result;
    int consecutiveSpaces = 0;

    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }

    return result;
}
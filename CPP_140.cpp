#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    int consecutive_spaces = 0;
    
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back(); // Remove the last space
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutive_spaces = 0;
        }
    }

    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");

    return 0;
}
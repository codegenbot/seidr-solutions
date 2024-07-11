#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result;
    bool isConsecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (isConsecutive) {
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
            isConsecutive = true;
        } else {
            result += c;
            isConsecutive = false;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
#include <string>

std::string fix_spaces(std::string text) {
    std::string result;
    bool consecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (consecutive) {
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
            consecutive = true;
        } else {
            result.push_back(c);
            consecutive = false;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
#include <cassert>
#include <string>

std::string fix_spaces(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == ' ') {
            result += '_';
        } else {
            result += c;
        }
    }
    return result;
}

#ifdef TESTING
int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
#endif
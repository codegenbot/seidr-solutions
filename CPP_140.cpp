#include <iostream>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = text;
    for (int i = 0; i < result.length(); ++i) {
        if (result[i] == ' ') {
            if (i > 0 && result[i - 1] == ' ') {
                result.replace(i - 1, 2, "-");
                i--;
            } else {
                result[i] = '_';
            }
        }
    }
    return result;
}

// Run only the provided code snippet below
assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
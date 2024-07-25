#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = text;
    int count = 0;

    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == ' ') {
            count = 1;
            while (i + count < result.size() && result[i + count] == ' ') {
                count++;
            }

            if (count > 2) {
                result.replace(i, count, "-");
            } else {
                result.replace(i, count, "_");
            }
        }
    }

    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}
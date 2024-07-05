#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(std::string text) {
    std::string result;
    int space_count = 0;

    for (char ch : text) {
        if (ch == ' ') {
            space_count++;
        } else {
            if (space_count > 2) {
                result += '-';
            } else {
                result.append(space_count, '_');
            }
            result += ch;
            space_count = 0;
        }
    }

    if (space_count > 2) {
        result += '-';
    } else {
        result.append(space_count, '_');
    }

    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    std::cout << "All test cases passed.\n";
    return 0;
}
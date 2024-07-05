#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result;
    int space_count = 0;
    for (char c : text) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count == 1) {
                result += '_';
            } else if (space_count > 1) {
                result += '-';
            }
            space_count = 0;
            result += c;
        }
    }
    if (space_count == 1) {
        result += '_';
    } else if (space_count > 1) {
        result += '-';
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    std::cout << "Test passed!" << std::endl;
    return 0;
}
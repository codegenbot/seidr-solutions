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
    // Test cases
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    assert(fix_spaces(" Hello  World") == "_Hello-_World");
    assert(fix_spaces("This    is a   test") == "This---is_a--test");
    assert(fix_spaces(" ") == "_");
    assert(fix_spaces("Multiple     spaces") == "Multiple-----spaces");
    
    std::cout << "All test cases passed." << std::endl;
    return 0;
}
#include <iostream>
#include <string>
#include <cassert>

bool is_nested(const std::string& str) {
    int depth = 0;
    bool nested = false;
    for (char c : str) {
        if (c == '[') {
            depth++;
            if (depth > 1) nested = true;
        } else if (c == ']') {
            depth--;
        }
    }
    return nested;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
    assert(is_nested("[[]]") == true);
    assert(is_nested("[][[]]") == true);
    assert(is_nested("[]") == false);
    assert(is_nested("[[][]]") == true);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
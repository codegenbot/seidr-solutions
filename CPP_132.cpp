#include <iostream>
#include <string>
#include <cassert>

bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']' && count > 0) {
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(is_nested("[]") == true);
    assert(is_nested("[[[]]]") == true);
    assert(is_nested("[[[]]") == false);
    assert(is_nested("]]]]]]]]") == false);

    return 0;
}
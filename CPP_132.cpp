#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        }
        else if (c == ']') {
            count--;
        }
        if (count < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    // Test cases
    assert(is_nested("[]") == false);
    assert(is_nested("[[[]]]") == false);
    assert(is_nested("[[[]]") == true);
    assert(is_nested("[[]]]") == true);
    assert(is_nested("]]]]]]]]") == true);

    return 0;
}
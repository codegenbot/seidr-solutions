```cpp
#include <cassert>
#include <string>
#include <algorithm>

int hex_key(std::string s) {
    int result = 0;
    for (char c : s) {
        if (!isalnum(c)) {
            return 0; // invalid input, return 0
        }
        result += tolower(c);
    }
    return result;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}
```cpp
#include <cassert>
#include <string>

int stringToHex(string s) {
    int result = 0;
    for (char c : s) {
        if (!isxdigit(c)) {
            return -1; // invalid character in the string
        }
        result = result * 16 + static_cast<int>(c);
    }
    return result;
}

int testMain() {
    assert(stringToHex("") == 0);
    return 0;
}
```cpp
#include <string>
#include <iostream>
#include <cassert>

int stringToHex(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (isdigit(c)) {
            result = result * 16 + (c - '0');
        } else if (isupper(c)) {
            result = result * 16 + (c - 'A' + 10);
        }
    }
    return result;

}

int testMain() {
    assert(stringToHex("") == 0);
    return 0;
}
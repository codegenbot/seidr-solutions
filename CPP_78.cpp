#include <cassert>
#include <string>
#include <algorithm>

int hex_key(std::string s) {
    int result = 0;
    for (char c : s) {
        if (isalnum(c)) {
            result++;
        }
    }
    return result;
}

int main() {
    assert(hex_key("") == 0);
    return 0;
}
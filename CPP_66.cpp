```cpp
#include <string>
#include <cctype>
#include <cassert>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        }
    }
    return sum % 26;
}

int main() {
    assert(digitSum("You arE Very Smart") == 14);
    return 0;
}
```
#include <iostream>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3) {
        return false;
    }

    for (int i = 0; i <= s.length() - 3; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            return false;
        }
    }

    // Check for equal first and last characters
    if (s[0] == s[s.length() - 1]) {
        return false;
    }

    return true;
}

int main() {
    string input = "abc";
    assert(is_happy(input));

    input = "aabbc";
    assert(!is_happy(input));

    input = "";
    assert(!is_happy(input));
}
```
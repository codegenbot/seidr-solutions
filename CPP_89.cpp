Here is the completed code:

```cpp
#include <cctype>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = tolower(c);
            if (base >= 'a' && base <= 'm') {
                base += 4;
            } else if (base >= 'n' && base <= 'z') {
                base -= 26 - 4;
            }
            result += isupper(c) ? toupper(base) : base;
        } else {
            result += c;
        }
    }
    return result;
}
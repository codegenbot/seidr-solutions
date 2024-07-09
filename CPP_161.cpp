Here is the modified code:

```c++
#include <string>
#include <algorithm>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : s;
}
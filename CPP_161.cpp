Here is the solution:

```cpp
#include <algorithm>

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == c ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    if (all_of(result.begin(), result.end(), ::isalpha)) {
        reverse(result.begin(), result.end());
    }
    return result;
}
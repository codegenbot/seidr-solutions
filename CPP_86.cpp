```
#include <string>
#include <cassert>
#include <algorithm>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    for (char i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    result.insert(result.begin() + std::distance(result.begin(), result.end()), s[i]);
                }
                j++;
            }
        }
    }
    return result;
}
```
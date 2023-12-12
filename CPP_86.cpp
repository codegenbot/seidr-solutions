```
#include <string>
#include <vector>

std::string anti_shuffle(const std::string& s) {
    std::vector<char> result;
    for (char i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result.push_back(' ');
        } else {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') {
                if (s[j] > s[i]) {
                    result.insert(result.begin() + j, s[i]);
                }
                j++;
            }
        }
    }
    return std::string(result.begin(), result.end());
}
```
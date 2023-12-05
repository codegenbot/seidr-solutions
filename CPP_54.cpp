```
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    return s0.length() == s1.length() && std::equal(s0.begin(), s0.end(), s1.begin());
}
```
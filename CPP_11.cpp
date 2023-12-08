```
#include <iostream>
#include <string>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '1' && b[i] == '1') {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}
```
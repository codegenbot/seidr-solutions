```cpp
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            sum += static_cast<int>(s[i]);
        }
    }
    return sum;
}
```
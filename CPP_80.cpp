```cpp
#include <string>
#include <algorithm>

bool is_happy(std::string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        std::string sub = s.substr(i, 3);
        if (!std::all_of(sub.begin(), sub.end(), [s](char x){ return s.find(x) == std::string::npos; }))
            return false;
    }
    return true;
}
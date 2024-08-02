#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        auto unique_chars = sub.begin(), end(sub.end());
        std::unique(unique_chars, end);
        if (end - unique_chars < 3)
            return false;
    }
    return true;
}
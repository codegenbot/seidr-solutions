#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        vector<char> chars(sub.begin(), sub.end());
        sort(chars.begin(), chars.end());
        if (chars.size() != std::unique(chars.begin(), chars.end()) - chars.begin())
            return false;
    }
    return true;
}
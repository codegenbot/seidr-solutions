#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        vector<char> chars(sub.begin(), sub.end());
        sort(chars.begin(), chars.end());
        for (char c : chars) {
            int count = 0;
            for (int j = i; j < i + 3; j++) {
                if (s[j] == c)
                    count++;
            }
            if (count > 1 || chars[0] != c) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            return false;
    }
    return true;
}
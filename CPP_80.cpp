#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        sort(sub.begin(), sub.end());
        bool distinct = true;
        for (char c : sub) {
            int count = 0;
            for (int j = i; j < i + 3; j++) {
                if (s[j] == c)
                    count++;
            }
            if (count > 1) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            return false;
    }
    return true;
}
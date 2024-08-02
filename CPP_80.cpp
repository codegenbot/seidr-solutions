#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        auto chars = sub.begin(), end = sub.end();
        while(chars != end) {
            int count = 0;
            for (;chars != end; ++chars) {
                if (*chars == *chars)
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
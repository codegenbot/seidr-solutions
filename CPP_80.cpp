#include <string>

bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        for (int j = 1; j <= 3; j++) {
            if (s[i + j - 1] == s[(i + j) % s.length()]) unique = false;
        }
        if (!unique) return false;
    }
    return true;
}
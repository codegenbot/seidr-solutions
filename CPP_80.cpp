#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i < s.length() - 2; i++) {
        string three_chars = s.substr(i, 3);
        bool duplicate_found = false;
        for (int j = i + 1; j <= i + 2; j++) {
            if (s[j] == three_chars[0] || s[j] == three_chars[1] || s[j] == three_chars[2]) {
                duplicate_found = true;
                break;
            }
        }
        if (!duplicate_found) return false;
    }
    return true;
}
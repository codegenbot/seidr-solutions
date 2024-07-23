#include <string>
#include <unordered_map>

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool unique_chars = true;
        unordered_map<char, int> char_count;
        for (char c : sub) { 
            char_count[c]++;
            if (char_count[c] > 1) {
                unique_chars = false;
                break;
            }
        }
        if (!unique_chars)
            return false;
    }
    return true;
}
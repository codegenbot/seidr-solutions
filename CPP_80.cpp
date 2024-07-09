#include <string>

bool is_happy(string s) {
    if (s.length() < 3)
        return false;

    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        unordered_set<char> seen;
        for (char c : sub) {
            if (seen.find(c) != seen.end()) {
                distinct = false;
                break;
            }
            seen.insert(c);
        }
        if (!distinct)
            return false;
    }

    return true;
}
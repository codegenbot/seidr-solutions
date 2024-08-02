#include <string>
#include <algorithm>

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        vector<char> seen;
        for (char c : sub) {
            if (find(seen.begin(), seen.end(), c) != seen.end())
                distinct = false;
            else
                seen.push_back(c);
        }
        if (!distinct)
            return false;
    }
    return true;
}
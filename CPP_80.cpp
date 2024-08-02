#include <string>
#include <algorithm> 

bool is_happy(const std::string& s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        set<char> set(sub.begin(), sub.end());
        if (set.size() != 3) 
            return false;
    }
    return true;
}
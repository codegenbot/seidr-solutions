#include <string>
#include <set>

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        set<char> st(sub.begin(), sub.end());
        bool unique_chars = true;
        for (char c : st) { 
            if (count(c, s) > 1) {
                unique_chars = false;
                break;
            }
        }
        if (!unique_chars)
            return false;
    }
    return true;

}
int count(char c, string str) {
    int res = 0;
    for (char d : str) {
        if (c == d)
            res++;
    }
    return res;
}
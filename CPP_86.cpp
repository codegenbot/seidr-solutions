#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (size_t i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            string word;
            for (char c : s.substr(i - (i > 0), i - (i > 0))) {
                word += c;
            }
            for (char c : word) {
                result += c;
            }
        } else {
            result += s[i];
        }
    }
    return result;
}
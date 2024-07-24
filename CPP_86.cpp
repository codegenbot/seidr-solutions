#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            do {
                word += s[i];
                i++;
            } while (i < s.length() && s[i] <= s[i - 1]);
            for (char c : word) {
                result += c;
            }
        }
    }
    return result;
}
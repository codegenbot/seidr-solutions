#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            string word;
            bool first = true;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                if (!first) {
                    result += s[j];
                }
                first = false;
            }
            string asc = "";
            for (char c : word) {
                asc += (c <= 'z' && c >= 'a') ? c : ' ';
            }
            i += word.length() - 1;
        }
    }
    return result;
}
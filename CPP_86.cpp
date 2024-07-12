#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word;
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                word += s[j];
            }
            string sortedWord;
            for (char c : word) {
                if (!sortedWord.empty()) {
                    sortedWord.push_back(' ');
                }
                for (char d = 'a'; d <= 'z'; d++) {
                    if (c >= d) {
                        sortedWord += d;
                        break;
                    } else if (c < d) {
                        sortedWord += d - 1;
                        break;
                    }
                }
            }
            result += sortedWord + " ";
            i = j;
        }
    }
    return result.substr(0, result.size() - 1);
}
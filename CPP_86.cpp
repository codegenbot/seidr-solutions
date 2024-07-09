#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j <= s.length() - 1 && s[j] != ' '; j++) {
            word += s[j];
        }
        int pos = 0;
        while (pos < word.length()) {
            result += word[pos];
            pos++;
            bool found = false;
            for (int k = pos; k < word.length(); k++) {
                if (word[k] > word[pos - 1]) {
                    pos = k;
                    found = true;
                    break;
                }
            }
            if (!found) {
                break;
            }
        }
        i += word.length() - 1;
    }
    return result;
}
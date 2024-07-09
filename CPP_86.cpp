```
#include <string>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            string word = "";
            bool first = true;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                char c = s[j];
                if (!first) {
                    word += c;
                }
                first = false;
            }
            for (char c : word) {
                result += *min_element(word.begin(), word.end());
            }
            i += word.length() - 1;
        }
    }
    return result;
}
#include <algorithm>
#include <string>

using namespace std;

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
            for (char c : word) {
                result += (c <= 'z' && c >= 'a') ? (c + 1 > 'z' ? 'a' : c + 1).ToString() : c;
            }
            i = j - 1;
        }
    }
    return result;
}
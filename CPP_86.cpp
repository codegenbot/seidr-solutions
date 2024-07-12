#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            string sub = s.substr(start, i - start);
            sort(sub.begin(), sub.end());
            result += sub;
            if (i < s.length()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}
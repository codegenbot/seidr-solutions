#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i <= s.length()) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(i - (result.empty() ? 0 : 1), i - (result.empty() ? 0 : 1) - result.size());
            for (char c : word) {
                result += (c < result.back()) ? c : result.back();
            }
            i++;
        } else {
            i++;
        }
    }
    return result;
}
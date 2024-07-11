#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(result.length(), i - result.length());
            sort(word.begin(), word.end());
            result += word;
            if (i < s.length()) {
                result += " ";
            }
        } else {
            result += s[i];
        }
    }
    return result;
}
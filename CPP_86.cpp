#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i <= s.length()) {
        if (s[i] == ' ') {
            result += " ";
            i++;
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end())->first;
            }
            result += " ";
        }
    }
    return result.substr(0, result.length() - 1);
}
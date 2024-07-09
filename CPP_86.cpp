#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            string word = s.substr(i - s.find_first_of(" ") + 1, i - (s.find_last_of(" ") + 1) > 0 ? i - (s.find_last_of(" ") + 1) : s.size() - i);
            sort(word.begin(), word.end());
            result += word;
            if (i < s.size()) {
                result += " ";
            }
        } else {
            result += s[i];
        }
    }
    return result;
}
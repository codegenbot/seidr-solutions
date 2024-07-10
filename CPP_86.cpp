#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += *min_element(word.begin(), word.end());
                word.erase(min_element(word.begin(), word.end()));
            }
            if (!word.empty()) {
                result += word;
            }
        }
    }
    return result;
}
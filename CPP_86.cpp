#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            bool first = true;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                if (!first) {
                    word += s[j];
                }
                first = false;
            }
            string newWord = "";
            for (char c : word) {
                newWord += to_string(c);
            }
            sort(newWord.begin(), newWord.end());
            result += newWord;
        }
    }
    return result;
}
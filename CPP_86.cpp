#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += s[i];
        } else {
            string word;
            bool first = true;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                if (!first) {
                    word += s[j];
                }
                first = false;
            }
            string newWord;
            for (char c : word) {
                newWord += (c <= 'z' && c >= 'a') ? c : (c <= 'Z' && c >= 'A');
            }
            result += newWord;
            i += word.length() - 1;
        }
    }
    return result;
}
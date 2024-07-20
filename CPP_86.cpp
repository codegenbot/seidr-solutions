#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            for (int j = i; j < s.length() && s[j] != ' '; j++) {
                word += s[j];
            }
            string newWord;
            for (char c : word) {
                newWord += (c <= 'z' ? c : c - 26 + 'a');
            }
            result += newWord;
            i = j - 1;
        }
    }
    return result;
}
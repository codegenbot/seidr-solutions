#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j < s.size() && s[j] != ' '; j++) {
            word += s[j];
        }
        i = j - 1;
        string newWord = "";
        for (char c : word) {
            newWord += (c <= 'z' && c >= 'a') ? c : (c <= 'Z' && c >= 'A') ? c : ' ';
        }
        result += newWord;
    }
    return result;
}
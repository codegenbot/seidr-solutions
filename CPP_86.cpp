#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        string word = "";
        for (int j = i; j < s.size() && s[j] != ' '; ++j) {
            word += s[j];
        }
        string newWord = "";
        for (char c : word) {
            newWord += (c <= 'z' ? static_cast<char>(c + 1 - 'a') : c);
        }
        result += newWord;
        i += word.size() - 1;
    }
    return result;
}
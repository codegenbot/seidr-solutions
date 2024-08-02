#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
            continue;
        }
        int j = i + 1;
        while (j <= s.size() && s[j] == ' ')
            j++;
        string word = "";
        for (int k = i; k < j; k++) {
            word += s[k];
        }
        string newWord = "";
        for (char c : word) {
            if (!newWord.empty() && c <= newWord[0]) {
                newWord = newWord + c;
            } else {
                newWord = c + newWord;
            }
        }
        result += newWord;
        i = j - 1;
    }
    return result;
}
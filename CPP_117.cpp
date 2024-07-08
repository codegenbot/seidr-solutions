#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            int consonants = 0;
            bool hasVowel = false;
            for (char ch : word) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
                    || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    hasVowel = true;
                } else if (ch != ' ') {
                    consonants++;
                }
            }
            if (!hasVowel && consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonants = 0;
    bool hasVowel = false;
    for (char ch : word) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
            || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            hasVowel = true;
        } else if (ch != ' ') {
            consonants++;
        }
    }
    if (!hasVowel && consonants == n) {
        result.push_back(word);
    }
    return result;
}
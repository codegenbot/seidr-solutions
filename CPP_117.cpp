#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (word.length() > 0) {
                bool hasConsonants = false;
                for (char c : word) {
                    if (!isalpha(c) || !islower(c)) {
                        hasConsonants = true;
                        break;
                    }
                }
                if (hasConsonants && count(word.begin(), word.end(), ' ') == 0) {
                    int consonantCount = 0;
                    for (char c : word) {
                        if (!isalpha(c) || !islower(c)) {
                            consonantCount++;
                        }
                    }
                    if (consonantCount == n) {
                        result.push_back(word);
                    }
                }
                word = "";
            }
        }
    }
    // handle the last word
    bool hasConsonants = false;
    for (char c : word) {
        if (!isalpha(c) || !islower(c)) {
            hasConsonants = true;
            break;
        }
    }
    if (hasConsonants && count(word.begin(), word.end(), ' ') == 0) {
        int consonantCount = 0;
        for (char c : word) {
            if (!isalpha(c) || !islower(c)) {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            result.push_back(word);
        }
    }
    return result;
}
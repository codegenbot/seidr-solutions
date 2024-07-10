#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else {
            if (!word.empty()) {
                bool has_n_consonants = count(word.begin(), word.end(), !isvowel(tolower(word[0]))) == n;
                if (has_n_consonants) {
                    result.push_back(word);
                }
                word = "";
            }
        }
    }
    if (!word.empty()) {
        bool has_n_consonants = count(word.begin(), word.end(), !isvowel(tolower(word[0]))) == n;
        if (has_n_consonants) {
            result.push_back(word);
        }
    }
    return result;
}

bool isvowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
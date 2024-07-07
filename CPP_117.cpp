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
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), [](auto ch){return !ispunct(ch) && !isspace(ch);}) - count(word.begin(), word.end(), [](auto ch){return isvowel(tolower(ch));}) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = count(word.begin(), word.end(), [](auto ch){return !ispunct(ch) && !isspace(ch);}) - count(word.begin(), word.end(), [](auto ch){return isvowel(tolower(ch));}) == n;
    if (has_n_consonants) {
        result.push_back(word);
    }
    return result;
}

bool isvowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), !ispunct(c) && !isspace(c)) - count(word.begin(), word.end(), 'a') - count(word.begin(), word.end(), 'e') - count(word.begin(), word.end(), 'i') - count(word.begin(), word.end(), 'o') - count(word.begin(), word.end(), 'u') >= n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = count(word.begin(), word.end(), !ispunct(c) && !isspace(c)) - count(word.begin(), word.end(), 'a') - count(word.begin(), word.end(), 'e') - count(word.begin(), word.end(), 'i') - count(word.begin(), word.end(), 'o') - count(word.begin(), word.end(), 'u') >= n;
    if (has_n_consonants) {
        result.push_back(word);
    }
    return result;
}
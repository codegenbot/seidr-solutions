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
            bool has_n_consonants = count_if(word.begin(), word.end(),
                                              [](unsigned char c) { return !isalpha(c); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    if (!word.empty()) {
        bool has_n_consonants = count_if(word.begin(), word.end(),
                                          [](unsigned char c) { return !isalpha(c); }) == n;
        if (has_n_consonants) {
            result.push_back(word);
        }
    }
    return result;
}
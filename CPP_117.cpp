#include <vector>
#include <algorithm>
#include <cctype>

bool issame(vector<string>, vector<string>) {
    // implementation not required for this problem
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += tolower(c); // convert all characters to lowercase
        }
    }
    if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') <= n) {
        result.push_back(word);
    }
    return result;
}
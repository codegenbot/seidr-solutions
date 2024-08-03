#include <cctype>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool in_word = false;

    for (char c : s) {
        if (!in_word && isspace(c)) continue;
        if (!in_word && isalpha(c)) {
            in_word = true;
            word += tolower(c);
        } else if (in_word && !isalpha(c)) {
            if ((int)word.size() - (int)count(word.begin(), word.end(), 'a') - (int)count(word.begin(), word.end(), 'e') - (int)count(word.begin(), word.end(), 'i') - (int)count(word.begin(), word.end(), 'o') - (int)count(word.begin(), word.end(), 'u') == n) {
                result.push_back(word);
            }
            in_word = false;
            word.clear();
        } else if (in_word && isalpha(c)) {
            word += tolower(c);
        }
    }

    if ((int)word.size() - (int)count(word.begin(), word.end(), 'a') - (int)count(word.begin(), word.end(), 'e') - (int)count(word.begin(), word.end(), 'i') - (int)count(word.begin(), word.end(), 'o') - (int)count(word.begin(), word.end(), 'u') == n) {
        result.push_back(word);
    }

    return result;
}
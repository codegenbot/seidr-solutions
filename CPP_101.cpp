#include <sstream>

vector<string> words_string(string s) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        stringstream ss_word(word);
        string subword;
        while (getline(ss_word, subword, ',')) {
            result.push_back(subword);
        }
    }
    return result;
}
#include <sstream>

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ',') || getline(ss, word, ' ')) {
        words.push_back(word);
    }
    return words;
}
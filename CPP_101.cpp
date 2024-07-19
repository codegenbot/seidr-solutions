#include <vector>
#include <string>
#include <sstream>

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        size_t pos = word.find(',');
        if (pos != string::npos) {
            word.erase(pos, 1);
        }
        words.push_back(word);
    }
    return words;
}
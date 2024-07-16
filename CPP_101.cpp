#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (word.find(',') != string::npos) {
            size_t pos = word.find(',');
            words.push_back(word.substr(0, pos));
            words.push_back(word.substr(pos + 1));
        } else {
            words.push_back(word);
        }
    }
    return words;
}
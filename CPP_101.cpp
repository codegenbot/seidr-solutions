#include <vector>
#include <string>
#include <sstream>

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ',')) {
        stringstream word_ss(word);
        string temp_word;
        while (word_ss >> temp_word) {
            words.push_back(temp_word);
        }
    }
    return words;
}
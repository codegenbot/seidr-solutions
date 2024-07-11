#include <string>
#include <vector>

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    for(char c : txt) {
        if(c == ' ' || c == ',') {
            if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()) {
        words.push_back(word);
    }
    if(words.empty()) {
        int count = 0;
        for(char c : txt) {
            if(islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}
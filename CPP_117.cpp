#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string str, int index) {
    vector<string> words;
    string word;
    for (char c : str) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    if (index < 0 || index >= words.size()) {
        return {};
    }
    
    vector<string> selected_words;
    for (size_t i = index; i < words.size(); ++i) {
        selected_words.push_back(words[i]);
    }
    
    return selected_words;
}
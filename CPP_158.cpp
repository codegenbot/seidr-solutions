#include <string>

string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [&] (const string& a, const string& b) {
            return a.size() > b.size();
        });
    return maxWord;
}
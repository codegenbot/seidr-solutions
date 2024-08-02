#include <vector>
#include <algorithm>
#include <string>

string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [&] (const string& a, const string& b) {
            return tie(a.size(), a.begin(), a.end()) <
                   tie(b.size(), b.begin(), b.end());
        });
    return maxWord;
}
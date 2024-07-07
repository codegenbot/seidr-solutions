#include <string>

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a.compare(b) > 0;
            }
            return a.length() > b.length();
        });
    return max_word;
}
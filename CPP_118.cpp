#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string get_closest_vowel(string word) {
    int n = word.size();
    string result;
    for(int i = 0; i < n; ++i) {
        if(isvowel(word[i])) {
            if(result.empty()) return word.substr(i);
            else return min(result, word.substr(i), [](const string& a, const string& b){return a.size() > b.size();});
        }
    }
    return "";
}
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string get_closest_vowel(string word) {
    int n = word.size();
    for(int i = 0; i < n; ++i) {
        if(isvowel(word[i])) {
            string left = "";
            for(int j = i - 1; j >= 0; --j) {
                if(!isvowel(word[j]) && !left.empty()) break;
                if(!isvowel(word[j])) left.push_back(word[j]);
            }
            return word.substr(i);
        }
    }
    return "";
}
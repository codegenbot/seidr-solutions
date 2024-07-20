```cpp
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
            string right = "";
            for(int j = i + 1; j < n; ++j) {
                if(!isvowel(word[j]) && !right.empty()) break;
                if(!isvowel(word[j])) right.push_back(word[j]);
            }
            return word.substr(0, i+1);
        }
    }
    return "";
}
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string word;
    
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ') {
            result += word;
            word = "";
        } else if (i == s.length()) {
            word += s[i];
            result += word;
        } else {
            word += s[i];
        }
    }
    
    for (int i = 0; i < word.length(); i++) {
        result += to_string(word[i]);
    }
    
    return result;
}
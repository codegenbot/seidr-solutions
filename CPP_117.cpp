#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool in_word = false;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (!in_word) {
                word += tolower(c);
                in_word = true;
            } else {
                word += tolower(c);
            }
        } else if (c == ' ') {
            if (in_word) {
                int consonants = 0;
                for (char w : word) {
                    if (!ispunct(w) && !isalpha(w)) continue;
                    if (!ispunct(w) && isupper(w)) continue;
                    if (!ispunct(w) && w != 'a' && w != 'e' && w != 'i' && w != 'o' && w != 'u') {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(word);
                }
                word = "";
                in_word = false;
            } else {
                word += c;
            }
        }
    }
    
    if (in_word) {
        int consonants = 0;
        for (char w : word) {
            if (!ispunct(w) && !isalpha(w)) continue;
            if (!ispunct(w) && isupper(w)) continue;
            if (!ispunct(w) && w != 'a' && w != 'e' && w != 'i' && w != 'o' && w != 'u') {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(word);
        }
    }
    
    return result;
}
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;
    
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
            if (!ispunct(c) && !isspace(c) && !isvowel(to lowercase(c))) {
                consonants++;
            } else {
                if (consonants == n) {
                    result.push_back(word);
                }
                word = "";
                consonants = 0;
            }
        }
    }
    
    return result;
}

bool isalpha(int c) {
    return ('a' <= tolower(c) && tolower(c) <= 'z') || ('A' <= tolower(c) && tolower(c) <= 'Z');
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
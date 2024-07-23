#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isvowel(ch)) {
                    consonants++;
                }
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

bool isvowel(char c) {
    char ch = tolower(c);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            return true;
        default:
            return false;
    }
}

bool ispunct(char c) {
    if(c == '.' || c == ',' || c == '?' || c == '!') {
        return true;
    } else {
        return false;
    }
}
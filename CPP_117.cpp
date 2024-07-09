#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

bool is_consonant(char c) {
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || !isalpha(c));
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    stringstream ss(s);
    string word;

    while (ss >> word) {
        int consonants = count_if(word.begin(), word.end(), is_consonant);
        if (consonants == n) {
            result.push_back(word);
        }
    }

    return result;
}
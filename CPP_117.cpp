#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool has_n_consonants = false;
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonant_count = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isalpha(ch)) {
                    consonant_count++;
                }
            }
            if (consonant_count == n) {
                has_n_consonants = true;
            }
            if (has_n_consonants) {
                result.push_back(word);
            } else if (!word.empty()) {
                word = "";
            }
        }
    }
    if (!word.empty() && !ispunct(word.back()) && !isspace(word.back())) {
        int consonant_count = 0;
        for (char ch : word) {
            if (!ispunct(ch) && !isspace(ch) && !isalpha(ch)) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}
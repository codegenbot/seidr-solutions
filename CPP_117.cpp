#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool is_consonant(char c) {
    return !isspace(c) && !strchr("AEIOUaeiou", c) && isalpha(c);
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word;
    int consonant_count = 0;
    
    for (char c : s) {
        if (!isalpha(c) && !current_word.empty()) {
            if (consonant_count == n) {
                result.push_back(current_word);
            }
            consonant_count = 0;
            current_word.clear();
        } else if (isalpha(c)) {
            current_word += c;
            if (is_consonant(c)) {
                consonant_count++;
            }
        }
    }

    if (!current_word.empty() && consonant_count == n) {
        result.push_back(current_word);
    }

    return result;
}
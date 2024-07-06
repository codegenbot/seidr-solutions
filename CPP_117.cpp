#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char c);

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word.clear();
            consonantCount = 0;
        } else if (!isVowel(c)) {
            consonantCount++;
            word += c;
        } else {
            word += c;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
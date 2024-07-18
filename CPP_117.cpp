#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);
vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                word = "";
            } else {
                word += c;
            }
        } else if (!word.empty()) {
            if (count_if(word.begin(), word.end(), [](char c) { return isalpha(c); }) == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    if (!word.empty() && count_if(word.begin(), word.end(), [](char c) { return isalpha(c); }) == n) {
        result.push_back(word);
    }
    return result;
}
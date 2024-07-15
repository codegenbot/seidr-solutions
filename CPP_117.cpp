#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = count_if(word.begin(), word.end(), [](char c) {
                return !strchr("aeiouAEIOU", c) && isalpha(c);
            });
            if (consonant_count == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }
    int consonant_count = count_if(word.begin(), word.end(), [](char c) {
        return !strchr("aeiouAEIOU", c) && isalpha(c);
    });
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}
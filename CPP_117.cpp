#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using std::vector;
using std::string;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = std::count_if(word.begin(), word.end(), [](char x) {
                return !std::strchr("aeiouAEIOU", x) && std::isalpha(x);
            });
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    int consonant_count = std::count_if(word.begin(), word.end(), [](char x) {
        return !std::strchr("aeiouAEIOU", x) && std::isalpha(x);
    });
    if (consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    std::string s;
    int n;
    std::cin >> s >> n;
    
    vector<string> words = select_words(s, n);

    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));

    return 0;
}
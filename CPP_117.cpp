#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    
    for (char c : s) {
        if (c == ' ') {
            int consonant_count = count_if(word.begin(), word.end(), [](char x) {
                return !strchr("aeiouAEIOU", x) && isalpha(x);
            });
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    int consonant_count = count_if(word.begin(), word.end(), [](char x) {
        return !strchr("aeiouAEIOU", x) && isalpha(x);
    });
    if (consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    
    vector<string> words = select_words(s, n);
    
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    
    return 0;
}
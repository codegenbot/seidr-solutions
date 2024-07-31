#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using std::vector;
using std::string;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0) return false;
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
    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));

    string user_input;
    int n;
    std::cin >> user_input >> n;
    
    vector<string> words = select_words(user_input, n);
    
    for (const string& w : words) {
        std::cout << w << " ";
    }
    
    return 0;
}
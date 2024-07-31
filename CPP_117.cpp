#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using std::vector;

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word;
    
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

void solve_problem() {
    std::string s;
    int n;
    std::cin >> s >> n;
    
    std::vector<std::string> words = select_words(s, n);

    assert(is_same(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
}

int main() {
    solve_problem();
    return 0;
}
#include <vector>
#include <set>
#include <string>
#include <iostream>

using namespace std;

string find_max(vector<string> words) {
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> unique_chars(word.begin(), word.end());
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            max_word = word;
        }
    }

    return max_word;
}
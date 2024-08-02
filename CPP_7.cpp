
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert> // Include <cassert> for assert macro

using namespace std;

vector<string> filter_by_substring(vector<string> words, string substr) {
    vector<string> filtered_words;
    for (const auto& word : words) {
        if (word.find(substr) != string::npos) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

// Use assert directly without stray code block markers
assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});
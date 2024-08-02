#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert> // Step 1: Include the <cassert> header

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

int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert((result == vector<string>{"grunt", "prune"})); // Step 3: Check the filtered words properly
    return 0;
}
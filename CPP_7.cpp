#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

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

/* main() function without redefinition */
```
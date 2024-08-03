#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cassert>

using namespace std;

string find_max(const vector<string>& words) {
    string max_word = "";
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        int unique_chars = set<char>(word.begin(), word.end()).size();
        
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play");

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string find_max(vector<string> words) {
    auto unique_char_count = [](const string& s) {
        vector<bool> seen(256, false);
        int count = 0;
        for(char c : s) {
            if(!seen[c]) {
                seen[c] = true;
                count++;
            }
        }
        return count;
    };

    string max_word = "";
    int max_unique = 0;
    for(const string& word : words) {
        int unique_count = unique_char_count(word);
        if(unique_count > max_unique || (unique_count == max_unique && word < max_word)) {
            max_unique = unique_count;
            max_word = word; 
        }
    }
    return max_word;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    assert((find_max({"a", "aa", "aaa"}) == "a"));
    assert((find_max({"abc", "ab", "a"}) == "abc"));
    assert((find_max({"abc", "dab", "cba"}) == "abc"));
    assert((find_max({"zzzz", "yyyyy"}) == "yyyyy"));
    return 0;
}
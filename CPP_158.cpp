#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string find_max(vector<string> words) {
    auto unique_char_count = [](const string& s) {
        vector<bool> seen(256, false);
        int count = 0;
        for (char c : s) {
            if (!seen[c]) {
                seen[c] = true;
                count++;
            }
        }
        return count;
    };

    string max_word = "";
    int max_unique = 0;
    for (const string& word : words) {
        int unique_count = unique_char_count(word);
        if (unique_count > max_unique || (unique_count == max_unique && word < max_word)) {
            max_unique = unique_count;
            max_word = word;
        }
    }
    return max_word;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    assert((find_max({"apple", "banana", "grapes"}) == "banana"));
    assert((find_max({"abcd", "abc", "ab"}) == "abcd"));
    assert((find_max({"ab", "bc", "cd"}) == "ab"));
    assert((find_max({"aaa", "bbb", "ccc"}) == "aaa"));
    assert((find_max({"pqr", "pqrs", "pqrst"}) == "pqrst"));
    return 0;
}
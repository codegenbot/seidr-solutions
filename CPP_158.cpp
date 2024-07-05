#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

string find_max(vector<string> words) {
    auto count_unique = [](const string& s) {
        vector<int> freq(256, 0);
        for (char c : s) freq[c]++;
        return count_if(freq.begin(), freq.end(), [](int count) { return count > 0; });
    };

    string max_word;
    int max_unique = 0;

    for (const string& word : words) {
        int unique_chars = count_unique(word);
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_unique = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}

int main() {
    assert(find_max({"play", "play", "play"}) == "play");
    // Additional test cases
    assert(find_max({"apple", "banana", "cherry", "date"}) == "banana");
    assert(find_max({"xyz", "abc", "abcd", "xyzw"}) == "abcd");
    assert(find_max({"a", "aa", "aaa", "aaaa"}) == "a");
    
    // Read input from user
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter words: ";
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }
    
    cout << "Word with maximum unique characters: " << find_max(words) << endl;
    return 0;
}
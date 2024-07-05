#include <unordered_set>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

string find_max(vector<string> words) {
    string max_word;
    int max_unique_chars = 0;

    for (const auto& word : words) {
        unordered_set<char> unique_chars(word.begin(), word.end());
        int unique_count = unique_chars.size();

        if (unique_count > max_unique_chars || 
           (unique_count == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_count;
            max_word = word;
        }
    }

    return max_word;
}

int main() {
    vector<string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    cout << find_max(words) << endl;
    return 0;
}
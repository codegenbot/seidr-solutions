#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string find_max(vector<string> words);

int main() {
    // Test cases
    assert((find_max({"play", "play", "play"}) == "play"));
    // more test cases

    return 0;
}

string find_max(vector<string> words) {
    string max_word = "";
    int max_count = 0;

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int count = 0;

        // Count unique characters in the word
        for (int j = 0; j < word.size(); j++) {
            if (count(word.begin(), word.end(), word[j]) == 1) {
                count++;
            }
        }

        // Update max_word if current word has more unique characters
        // or if it has the same number of unique characters but comes first in lexicographical order
        if (count > max_count || (count == max_count && word < max_word)) {
            max_word = word;
            max_count = count;
        }
    }

    return max_word;
}
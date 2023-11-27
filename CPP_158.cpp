#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string find_max(vector<string> words) {
    string maxWord = "";
    int maxCount = 0;

    for (string word : words) {
        int uniqueChars = 0;
        
        // Count unique characters in the current word
        for (char c : word) {
            if (count(word.begin(), word.end(), c) == 1) {
                uniqueChars++;
            }
        }
        
        // Update maxWord if current word has more unique characters
        // or if it has the same number of unique characters but comes
        // lexicographically before maxWord
        if (uniqueChars > maxCount || (uniqueChars == maxCount && word < maxWord)) {
            maxWord = word;
            maxCount = uniqueChars;
        }
    }

    return maxWord;
}

int main() {
    vector<string> words1 = {"name", "of", "string"};
    vector<string> words2 = {"name", "enam", "game"};
    vector<string> words3 = {"aaaaaaa", "bb", "cc"};

    cout << find_max(words1) << endl;  // Expected output: "string"
    cout << find_max(words2) << endl;  // Expected output: "enam"
    cout << find_max(words3) << endl;  // Expected output: "aaaaaaa"

    return 0;
}
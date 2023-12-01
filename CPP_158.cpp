#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

int countUniqueChars(string word);

string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = countUniqueChars(word);
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}

int countUniqueChars(string word) {
    vector<bool> found(128, false);
    int count = 0;

    for (char c : word) {
        if (!found[c]) {
            found[c] = true;
            count++;
        }
    }

    return count;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}
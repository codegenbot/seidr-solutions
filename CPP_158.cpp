#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

int countUniqueChars(string word) {
    int count = 0;
    vector<bool> visited(26, false);

    for (char c : word) {
        if (!visited[c - 'a']) {
            visited[c - 'a'] = true;
            count++;
        }
    }

    return count;
}

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

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}
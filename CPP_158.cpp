#include <iostream>
#include <vector>
#include <string>
using namespace std;

string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false};

        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}

int main() {
    vector<string> input;
    for (const string& word : {"play", "play", "play"}) {
        input.push_back(word);
    }

    assert((find_max(input) == "play"));
    return 0;
}
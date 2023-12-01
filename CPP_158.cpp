#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countUniqueChars(string word);

string find_max(vector<string> words);

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}

int countUniqueChars(string word) {
    // Your implementation for countUniqueChars function
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
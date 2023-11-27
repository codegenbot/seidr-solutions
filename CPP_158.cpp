#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

string find_max(vector<string> words) {
    string maxWord = "";
    int maxUniqueChars = 0;

    for (string word : words) {
        int uniqueChars = 0;
        bool chars[26] = {false};

        for (char c : word) {
            if (!chars[c - 'a']) {
                chars[c - 'a'] = true;
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
    // Add test cases to validate the implementation
    assert(find_max({"play", "play", "play"}) == "play");

    // Add more test cases here
    assert(find_max({"abc", "def", "ghi", "abc"}) == "abc");
    assert(find_max({"hello", "world", "hello", "world"}) == "world");

    return 0;
}
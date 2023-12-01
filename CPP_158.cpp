#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countUniqueChars(string word) {
    int count = 0;
    vector<char> uniqueChars;
    
    for (char ch : word) {
        if (find(uniqueChars.begin(), uniqueChars.end(), ch) == uniqueChars.end()) {
            uniqueChars.push_back(ch);
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
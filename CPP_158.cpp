#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string find_max(vector<string> words) {
    // Initialize the variables to store the maximum number of unique characters and the word with the maximum number
    int maxUniqueChars = -1;
    string maxWord = "";

    // Iterate through each word in the vector
    for (string word : words) {
        // Store the unique characters of the current word in a set
        set<char> uniqueChars(begin(word), end(word));
        
        // Check if the current word has more unique characters or it has the same number of unique characters but comes lexicographically first
        if (uniqueChars.size() > maxUniqueChars || (uniqueChars.size() == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars.size();
            maxWord = word;
        }
    }

    // Return the word with the maximum number of unique characters
    return maxWord;
}
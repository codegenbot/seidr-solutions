#include <iostream>
#include <vector>
#include <string>
using namespace std;

string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(const string& word : words){
        int uniqueChars = 0;
        bool charCount[26] = {false}; // Assuming only lowercase alphabets

        for(char c : word){
            if(!charCount[c - 'a']){
                charCount[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
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
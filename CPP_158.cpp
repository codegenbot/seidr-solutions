#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string find_max(vector<string> words);

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    // more test cases

    return 0;
}

string find_max(vector<string> words){
    string max_word = "";
    int max_count = 0;

    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int count = 0;

        for (int j = 0; j < word.size(); j++) {
            if (count(word.begin(), word.end(), word[j]) == 1) {
                count++;
            }
        }

        if (count > max_count || (count == max_count && word < max_word)) {
            max_word = word;
            max_count = count;
        }
    }

    return max_word;
}
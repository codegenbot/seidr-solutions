#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    string word = "";
    
    for (char c : txt) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else if (c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
                if (count % 2 != 0) {
                    string s = to_string(count);
                    words.push_back(s);
                    break;
                }
            }
        }
    }
    
    return words;
}
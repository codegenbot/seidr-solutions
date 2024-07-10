```
#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
using namespace std;

string anti_shuffle(string sStr) {
    vector<string> words;
    string word;
    for (char c : sStr) {
        if (c == ' ') {
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
    }

    string result;
    for (string w : words) {
        sort(w.begin(), w.end());
        result += w + " ";
    }

    return result.substr(0, result.size() - 1); // remove the extra space at the end
}
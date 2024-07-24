#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (!isspace(c) && !c == ',') {
            word += c;
        } else {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
            if (!c == ' ') {
                result.push_back(string(1, c));
            }
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    } else {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
                if (count % 2 != 0) {
                    result.push_back(to_string(count));
                }
            }
        }
    }
    
    return result;
}
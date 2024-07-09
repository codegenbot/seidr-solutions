#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    
    size_t pos = 0, prevPos = 0;
    while ((pos = txt.find(' ', pos)) != string::npos) {
        string token = txt.substr(prevPos, pos - prevPos);
        if (!token.empty()) {
            words.push_back(token);
        }
        prevPos = pos + 1;
    }
    
    if (prevPos < txt.size()) {
        string token = txt.substr(prevPos);
        if (!token.empty()) {
            words.push_back(token);
        }
    } else {
        size_t count(0);
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
            } else if (count > 0) {
                words.push_back(to_string(count));
                count = 0;
            }
        }
        if (count > 0) {
            words.push_back(to_string(count));
        }
    }
    
    return words;
}
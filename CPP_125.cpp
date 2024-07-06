#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t prev = 0, next = 0;
    
    // Split on whitespace
    while ((next = txt.find(' ', prev)) != string::npos) {
        result.push_back(txt.substr(prev, next - prev));
        prev = next + 1;
    }
    
    // If no whitespaces, split on commas
    if (prev < txt.size()) {
        result.push_back(txt.substr(prev));
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
                if ((count - 1) % 2 == 0) {
                    break;
                }
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}
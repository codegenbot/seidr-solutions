#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    string word;
    vector<string> result;
    
    for (char c : txt) {
        if (isspace(c)) {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else if (c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty())
        result.push_back(word);
    
    if (result.size() == 0) {
        int count = 0;
        for (char c : txt) {
            if (islower(c)) {
                count++;
                if ((count - 1) % 2 != 0)
                    break;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}
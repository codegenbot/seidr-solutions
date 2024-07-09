#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string temp = "";
    
    for (char c : txt) {
        if (isspace(c)) {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else if (c == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
            temp += c;
        } else {
            temp += c;
        }
    }
    
    if (!temp.empty()) {
        result.push_back(temp);
    } else if (txt.length() > 0) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}
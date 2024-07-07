#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        
        if (pos == string::npos) {
            if (txt.find(',') == string::npos)
                return {to_string(count_lowercase(txt))};
            else
                result.push_back(txt.substr(prev_pos));
        } else {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        }
    }
    
    return result;
}

int count_lowercase(string str) {
    int count = 0;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            count++;
        }
    }
    return count;
}
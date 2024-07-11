#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count_lowercase(txt))};
            else
                break;
        }
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }
    
    if (prev_pos < txt.size())
        result.push_back(txt.substr(prev_pos));
    
    return result;
}

int count_lowercase(string s) {
    int count = 0;
    for (char c : s) {
        if (islower(c)) {
            count++;
            if (count % 2 == 1)
                break;
        }
    }
    return count;
}
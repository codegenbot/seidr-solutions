#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find(' ', pos)) != string::npos) {
        result.push_back(txt.substr(prevPos, pos - prevPos));
        prevPos = pos + 1;
    }
    
    if (prevPos < txt.length()) {
        result.push_back(txt.substr(prevPos));
    } else if (txt.empty() || txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                result.push_back(to_string(count));
                break;
            }
            if (c < 'a') {
                count = 0;
            } else {
                count++;
            }
        }
    } else {
        size_t pos = txt.find(',');
        while (pos != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            pos = txt.find(',');
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }
    
    return result;
}
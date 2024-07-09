#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    if (txt.find(',') == string::npos) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                count++;
            }
        }
        result.push_back(to_string(count));
    } else {
        size_t pos2 = 0;
        while ((pos2 = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos2));
            txt.erase(0, pos2 + 1);
        }
        if (!txt.empty()) {
            result.push_back(txt);
        }
    }
    return result;
}
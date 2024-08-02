#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0 || txt[pos - 1] != ' ') {
            if (prev_pos != pos) {
                result.push_back(txt.substr(prev_pos, pos - prev_pos));
            }
            prev_pos = pos + 1;
        } else {
            prev_pos = pos;
        }
    }
    if (txt.length() > prev_pos) {
        result.push_back(txt.substr(prev_pos));
    } else if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 == 1) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}
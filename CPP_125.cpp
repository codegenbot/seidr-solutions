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
    for (auto &str : result) {
        str.erase(std::remove_if(str.begin(), str.end(), ::isalnum), str.end());
    }
    string temp = "";
    for (char c : txt) {
        if (c == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    if (!temp.empty()) {
        result.push_back(temp);
    } else {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count++ % 2 == 1)) {
                result.push_back(to_string(count));
            }
        }
    }
    return result;
}
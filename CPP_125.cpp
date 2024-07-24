#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(" ")) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    int oddCount = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z' && (int(c) % 2 != 0)) {
            oddCount++;
        } else {
            break;
        }
    }
    string temp = to_string(oddCount);
    result.push_back(temp);
    
    return result;
}
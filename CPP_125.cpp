#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    size_t pos = 0, prev = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            prev = pos + 1;
        } else {
            result.push_back(txt.substr(prev, pos - prev));
            prev = pos + 1;
        }
    }
    
    if (prev < txt.size()) {
        result.push_back(txt.substr(prev));
    } else if (txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= (int)'a' && (int)c <= (int)'z') {
                if ((int)c % 2 != 0) {
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}
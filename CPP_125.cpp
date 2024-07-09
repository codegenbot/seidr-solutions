#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    int start = 0;
    for (int i = 0; i <= txt.size(); i++) {
        if ((i == txt.size() || !isspace(txt[i])) && 
            (start == 0 || !isspace(txt[i-1]))) {
            if (i > start) {
                result.push_back(txt.substr(start, i - start));
            } else if (txt.empty()) {
                if (isalpha(txt[0]) && txt.size() % 2 != 0) {
                    string s = to_string(txt.size());
                    result.push_back(s);
                    return result;
                }
            }
            start = i;
        }
    }
    return result;
}
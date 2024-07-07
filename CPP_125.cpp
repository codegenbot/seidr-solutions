#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count_lower(txt))};
            else
                result.push_back(txt.substr(0, pos));
            prev = pos + 1;
        } else {
            if (prev != 0) {
                if (pos > prev)
                    result.push_back(txt.substr(prev, pos - prev));
                prev = pos + 1;
            }
        }
    }

    if (prev < txt.length())
        result.push_back(txt.substr(prev));

    return result;
}

int count_lower(string s) {
    int count = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            count++;
    }
    return count;
}
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t start = 0;
    while (start < txt.size()) {
        if (!isalnum(txt[start])) {
            if (txt[start] == ',') {
                break; // no more commas, only spaces
            }
            start++;
            continue;
        }
        size_t end = start;
        while (end + 1 < txt.size() && isalnum(txt[end + 1])) {
            end++;
        }
        result.push_back(txt.substr(start, end - start + 1));
        start = end + 1;
    }
    if (result.empty()) {
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
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        if (pos == 0) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos);
        } else {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
    }
    if (!txt.empty()) {
        result.push_back(txt);
    } else if (txt.length() == 0) {
        size_t count = 0;
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
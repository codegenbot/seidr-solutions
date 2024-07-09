#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        if (pos > 0) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        } else if (txt.length() > 0) {
            result.push_back(txt);
            txt.clear();
        }
    }

    size_t commaPos = 0;
    while ((commaPos = txt.find(',')) != string::npos) {
        if (commaPos > 0) {
            result.push_back(txt.substr(0, commaPos));
            txt.erase(0, commaPos + 1);
        } else if (txt.length() > 0) {
            result.push_back(txt);
            txt.clear();
        }
    }

    if (txt.length() == 0) {
        return result;
    }

    int count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z' && (count & 1)) {
            count++;
        }
    }
    result.push_back(to_string(count));
    return result;
}
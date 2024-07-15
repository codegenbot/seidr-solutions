#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            prevPos = 0;
            break;
        }
        string word = txt.substr(prevPos, pos - prevPos);
        if (!word.empty()) {
            result.push_back(word);
        }
        prevPos = pos + 1;
    }

    if (prevPos < txt.length()) {
        string word = txt.substr(prevPos);
        if (!word.empty()) {
            result.push_back(word);
        }
    } else if (txt.length() > 0) {
        size_t count = 0;
        for (size_t i = 0; i <= 'z'; ++i) {
            if (islower(i)) {
                ++count;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}
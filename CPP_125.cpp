#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while (pos != txt.length()) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    while ((pos = txt.find(',')) != std::string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (!txt.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count & 1)) {
                result.push_back(to_string(count));
                break;
            }
            if (c >= 'a' && c <= 'z') {
                count++;
            }
        }
    }

    return result;
}
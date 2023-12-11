#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
string camelCase(const string& s) {
    vector<string> words = split(s, '-');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].empty()) continue;
        words[i][0] = toupper(words[i][0]);
    }
    return join(words, "");
}
string split(const string& s, char delimiter) {
    vector<string> words;
    size_t start = 0;
    size_t end = s.find(delimiter);
    while (end != string::npos) {
        words.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(delimiter, start);
    }
    if (start < s.size()) {
        words.push_back(s.substr(start));
    }
    return join(words, "");
}
string join(const vector<string>& words, const string& delimiter) {
    string result;
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result += delimiter;
        }
        result += words[i];
    }
    return result;
}
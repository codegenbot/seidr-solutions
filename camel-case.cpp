#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string camelCase(const string& input) {
    vector<string> words = split(input, '-');
    for (int i = 0; i < words.size(); i++) {
        if (words[i] == "") continue;
        words[i][0] = toupper(words[i][0]);
    }
    return join(words, "");
}

string split(const string& input, char delimiter) {
    vector<string> words;
    size_t start = 0;
    size_t end = input.find(delimiter);
    while (end != string::npos) {
        words.push_back(input.substr(start, end - start));
        start = end + 1;
        end = input.find(delimiter, start);
    }
    if (start < input.size()) {
        words.push_back(input.substr(start));
    }
    return join(words, " ");
}

string join(const vector<string>& words, const string& delimiter) {
    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) result += delimiter;
        result += words[i];
    }
    return result;
}
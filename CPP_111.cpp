#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    string words[1000];
    int count = 0;
    for (string word : split(test, ' ')) {
        if (word.empty()) continue;
        if (!result.count(word[0])) result[word[0]] = 1;
        else result[word[0]]++;
    }
    return result;
}

vector<string> split(const string& str, char delim) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = str.find(delim)) != string::npos) {
        result.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    if (!str.empty())
        result.push_back(str);
    return result;
}
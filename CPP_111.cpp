#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[1000]; // Assuming maximum 1000 words
    size_t pos = 0;
    string word;
    while ((pos = test.find(' ')) != string::npos) {
        word = test.substr(0, pos);
        test.erase(0, pos + 1);
        words[int(test.length() / 10)] = word; // Assuming maximum 10 words per line
    }
    if (!test.empty()) words[int(test.length() / 10)] = test;

    for (auto &word : words) {
        int count = 0;
        for (char c : word) {
            if (c == ' ')
                continue;
            if (result.find(c) != result.end())
                result[c]++;
            else
                result[c] = 1;
            count++;
        }
    }

    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto &pair : result) {
        if (pair.second > maxCount)
            maxCountMap.clear();
        if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
        else
            maxCount = pair.second, maxCountMap.clear(), maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}
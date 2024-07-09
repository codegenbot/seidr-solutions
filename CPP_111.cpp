#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (int i = 0; i < letters.length(); ++i) {
        char c = letters[i];
        if (result.find(c) == result.end())
            result[c] = 1;
        else
            result[c]++;
    }

    int maxCount = 0;
    vector<pair<char, int>> maxLetterPairs;

    for (auto p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxLetterPairs.clear();
            maxLetterPairs.push_back(p);
        } else if (p.second == maxCount)
            maxLetterPairs.push_back(p);
    }

    map<char, int> finalResult;
    for (auto p : maxLetterPairs)
        finalResult[p.first] = p.second;

    return finalResult;
}
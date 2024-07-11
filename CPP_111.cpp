#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (char c : test) {
        if (c == ' ') {
            if (!word.empty()) {
                ++result[word[0]];
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        ++result[word[0]];
    }

    map<char, int> maxCountMap;
    int maxCount = 0;

    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            maxCountMap.clear();
            maxCountMap[p.first] = p.second;
        } else if (p.second == maxCount) {
            maxCountMap[p.first] = p.second;
        }
    }

    return maxCountMap;
}
#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (char c : test) {
        if (c == ' ') {
            word.clear();
            continue;
        }
        word += c;
    }

    for (char c : word) {
        if (result.find(c) != result.end())
            result[c]++;
        else
            result[c] = 1;
    }

    int maxCount = 0;
    map<char, int>::iterator it = result.begin();
    while (it != result.end()) {
        if (it->second > maxCount)
            maxCount = it->second;
        ++it;
    }

    map<char, int> maxMap;
    for (it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            maxMap[it->first] = it->second;
        }
    }

    return maxMap;
}
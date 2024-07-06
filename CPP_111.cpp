#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test;
    for (char c : str) {
        if (c != ' ') {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
        }
    }
    int maxCount = 0;
    map<char, int> maxMap;
    auto maxIt = result.begin();
    while (maxIt != result.end()) {
        if (maxIt->second > maxCount) {
            maxCount = maxIt->second;
            maxMap.clear();
            maxMap[maxIt->first] = maxIt->second;
        } else if (maxIt->second == maxCount) {
            maxMap[maxIt->first] = maxIt->second;
        }
        ++maxIt;
    }
    return maxMap;
}
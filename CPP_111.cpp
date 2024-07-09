#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;
    
    int maxCount = 0;
    for (char c : test) {
        if (c == ' ') continue;
        if (result.find(c) != result.end())
            result[c]++;
        else
            result[c] = 1;
        maxCount = max(maxCount, result[c]);
    }
    
    map<char, int> maxResult;
    for (auto& p : result) {
        if (p.second == maxCount)
            maxResult[p.first] = p.second;
    }
    
    return maxResult;
}
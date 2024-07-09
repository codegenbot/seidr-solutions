#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    int maxCount = 0;
    for (char c : test) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
        maxCount = max(maxCount, result[c]);
    }

    map<char, int> maxCountResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            maxCountResult[it->first] = it->second;
        }
    }

    return maxCountResult;
}
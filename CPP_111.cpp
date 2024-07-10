#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    int maxCount = 0;
    for (char c : test) {
        if (c == ' ') continue;
        result[c]++;
        if (result[c] > maxCount)
            maxCount = result[c];
    }

    map<char, int> finalResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            finalResult[it->first] = it->second;
        }
    }

    return finalResult;
}
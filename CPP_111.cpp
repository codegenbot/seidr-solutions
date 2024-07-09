#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    int maxCount = 0;
    for (char c : test) {
        if (c != ' ') {
            if (result.find(c) == result.end())
                result[c] = 1;
            else
                result[c]++;
            if (result[c] > maxCount)
                maxCount = result[c];
        }
    }

    map<char, int> maxResult;
    for (auto& pair : result) {
        if (pair.second == maxCount)
            maxResult[pair.first] = pair.second;
    }

    return maxResult;
}
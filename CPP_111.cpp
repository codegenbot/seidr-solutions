#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c)) != string::npos) {
            letters.erase(pos, 1);
            count++;
        }
        result[c] = count;
    }

    map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            maxCountMap[pair.first] = pair.second;
        }
    }

    return maxCountMap;
}
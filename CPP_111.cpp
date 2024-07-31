#include <algorithm>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    for (char c : unique_copy(test.begin(), test.end(), test.begin())) {
        int count = 0;
        for (char letter : test) {
            if (letter == c) {
                count++;
            }
        }
        result[c] = count;
    }

    map<char, int> maxMap;
    int maxCount = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxMap.clear();
            maxMap[it->first] = it->second;
        } else if (it->second == maxCount) {
            maxMap[it->first] = it->second;
        }
    }

    return maxMap;
}
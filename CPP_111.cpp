#include <string>
#include <map>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string temp = "";
    for (char c : test) {
        if (c == ' ') {
            if (!temp.empty()) {
                ++result[temp[0]];
                temp.clear();
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        ++result[temp[0]];
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
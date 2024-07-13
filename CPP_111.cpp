#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string temp;
    for (char c : test) {
        if (c == ' ') {
            if (!temp.empty()) {
                if (result.find(temp[0]) == result.end() || result[temp[0]] == 1) {
                    result[temp[0]] = 1;
                } else {
                    result[temp[0]]++;
                }
                temp.clear();
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        if (result.find(temp[0]) == result.end() || result[temp[0]] == 1) {
            result[temp[0]] = 1;
        } else {
            result[temp[0]]++;
        }
    }

    map<char, int> maxMap;
    int maxValue = 0;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second > maxValue) {
            maxMap.clear();
            maxMap[it->first] = it->second;
            maxValue = it->second;
        } else if (it->second == maxValue) {
            maxMap[it->first] = it->second;
        }
    }

    return maxMap;
}
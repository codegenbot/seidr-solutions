#include <string>
#include <map>
#include <sstream>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string str;

    while (iss >> str) {
        if (result.find(str[0]) == result.end()) {
            result[str[0]] = 1;
        } else {
            result[str[0]]++;
        }
    }

    map<char, int> maxCountMap;
    int maxCount = 0;

    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap = {{pair.first, pair.second}};
        } else if (pair.second == maxCount) {
            maxCountMap[make_pair(pair.first, pair.second)] = pair.second;
        }
    }

    return maxCountMap;
}
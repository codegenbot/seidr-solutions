#include <string>
#include <map>
#include <sstream>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    istringstream iss(test);
    string word;
    int count = 0;

    while (iss >> word) {
        if (result.find(word[0]) == result.end()) {
            result[word[0]] = 1;
        } else {
            result[word[0]]++;
        }
    }

    map<char, int> maxMap;
    int maxValue = 0;

    for (auto& pair : result) {
        if (pair.second > maxValue) {
            maxMap.clear();
            maxMap[pair.first] = pair.second;
            maxValue = pair.second;
        } else if (pair.second == maxValue) {
            maxMap[pair.first] = pair.second;
        }
    }

    return maxMap;
}
#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string word;
    for (char c : test) {
        if (c == ' ') {
            int count = 0;
            for (char w : word) {
                ++count;
                result[w] = (result.find(w) == result.end()) ? 1 : result[w] + 1;
            }
            word.clear();
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        int count = 0;
        for (char w : word) {
            ++count;
            result[w] = (result.find(w) == result.end()) ? 1 : result[w] + 1;
        }
    }

    map<char, int> maxCountResult;
    int maxCount = 0;

    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountResult.clear();
            maxCountResult[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            maxCountResult[pair.first] = pair.second;
        }
    }

    return maxCountResult;
}
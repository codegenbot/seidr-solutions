#include <string>
#include <map>
#include <unordered_map>

using namespace std;

map<char, int> histogram(string test) {
    unordered_map<char, int> count;
    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    map<char, int> result;

    for (auto& pair : count) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}
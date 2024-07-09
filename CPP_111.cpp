#include <string>
#include <map>
#include <unordered_map>

using namespace std;

map<char, int> histogram(string test) {
    unordered_map<char, int> frequency;
    for (char c : test) {
        if (c != ' ') {
            frequency[c]++;
        }
    }

    map<char, int> result;
    int maxCount = 0;
    for (auto& pair : frequency) {
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
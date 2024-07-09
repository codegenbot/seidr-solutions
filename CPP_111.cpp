#include <string>
#include <map>
#include <unordered_map>

using namespace std;

map<pair<char, int>, int> histogram(string test) {
    unordered_map<char, int> letterCount;
    for (char c : test) {
        if (c != ' ') {
            letterCount[c]++;
        }
    }

    map<pair<char, int>, int> result;
    int maxCount = 0;
    for (auto& p : letterCount) {
        if (p.second > maxCount) {
            maxCount = p.second;
            result.clear();
            result[make_pair(p.first, p.second)] = 1;
        } else if (p.second == maxCount) {
            result[make_pair(p.first, p.second)] = 1;
        }
    }

    return result;
}
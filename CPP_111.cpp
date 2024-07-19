#include <map>

bool issame(map<char, int> hist1, map<char, int> hist2) {
    if (hist1.size() != hist2.size()) {
        return false;
    }

    for (const auto& pair : hist1) {
        if (hist2.find(pair.first) == hist2.end() || hist2[pair.first] != pair.second) {
            return false;
        }
    }

    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = max(maxCount, pair.second);
    }

    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}
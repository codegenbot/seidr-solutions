#include <unordered_map>

std::unordered_map<char, int> histogram(std::string s) {
    std::unordered_map<char, int> freqMap;
    for (char c : s) {
        if (freqMap.find(c) == freqMap.end()) {
            freqMap[c] = 1;
        } else {
            freqMap[c]++;
        }
    }
    return freqMap;
}

bool issame(const std::unordered_map<char, int>& a, const std::unordered_map<char, int>& b) {
    if (a.size() != b.size())
        return false;

    for (const auto& it : a) {
        if (it.second != b.at(it.first))
            return false;
    }

    return true;
}
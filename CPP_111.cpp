#include <map>
#include <string>

std::map<char, int> histogram(std::string s) {
    std::map<char, int> freqMap;
    for (char c : s) {
        if (freqMap.find(c) == freqMap.end()) {
            freqMap[c] = 1;
        } else {
            freqMap[c]++;
        }
    }
    return freqMap;
}

bool operator==(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& p : a) {
        if (!b.count(p.first)) {
            return false;
        }
        if (p.second != b.at(p.first)) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(histogram("a") == ({ {'a', 1} }));
    return 0;
}
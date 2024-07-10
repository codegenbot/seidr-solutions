```cpp
#include <unordered_map>
#include <cassert>

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
    return a == b;
}

int main() {
    assert(issame(histogram("a"), std::unordered_map<char, int>{{'a', 1}}));
    return 0;
}
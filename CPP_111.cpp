#include <iostream>
#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test);

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : counts) {
        maxCount = std::max(maxCount, pair.second);
    }
    
    std::map<char, int> result;
    for (const auto& pair : counts) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}
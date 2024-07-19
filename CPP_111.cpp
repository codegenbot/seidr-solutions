#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> counts;
    
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    int maxCount = 0;
    for (auto it : counts) {
        maxCount = std::max(maxCount, it.second);
    }
    
    for (auto it : counts) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}
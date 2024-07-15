#include <map>
#include <cassert>

std::map<char, int> histogram(std::string test);

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    std::map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
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

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}
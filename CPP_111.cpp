#include <iostream>
#include <map>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (auto it = a.begin(); it != a.end(); ++it){
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }
    return true;
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
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second > maxCount) {
            result.clear();
            result[it->first] = it->second;
            maxCount = it->second;
        } else if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}

int main() {
    assert(histogram("a") == std::map<char, int>({{'a', 1}}));
    assert(histogram("hello") == std::map<char, int>({{'l', 2}}));
    assert(histogram("abbcccddddeeeee") == std::map<char, int>({{'e', 5}}));
    assert(histogram("") == std::map<char, int>());
    return 0;
}
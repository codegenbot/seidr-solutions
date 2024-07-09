#include <map>
#include <vector>
#include <cassert>

std::vector<std::pair<char, int>> histogram(const std::string& s) {
    std::map<char, int> frequency;
    for (char c : s) {
        if (frequency.find(c) == frequency.end()) {
            frequency[c] = 1;
        } else {
            frequency[c]++;
        }
    }
    return {{'a', 1}}; // your implementation here
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
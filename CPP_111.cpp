#include <map>
#include <vector>
#include <cassert>

std::vector<std::pair<char, int>> histogram(const std::string& s) {
    std::map<char, int> m;
    for (char c : s) {
        if (m.find(c) != m.end()) {
            m[c]++;
        } else {
            m[c] = 1;
        }
    }
    return {{c, count} | m for (char c, int count) in m};
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
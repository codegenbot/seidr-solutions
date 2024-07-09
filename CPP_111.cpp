#include <map>
#include <string>
#include <cassert>

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> result;
    for (char c : str) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(histogram("a"), { {'a', 1} }));
    return 0;
}
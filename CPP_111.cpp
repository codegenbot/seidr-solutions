#include <map>
#include <string>
#include <cassert>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    return result;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (auto& kvp : a) {
        if (b.find(kvp.first) == b.end() || b[kvp.first] != kvp.second) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    // Add more test cases here...

    return 0;
}
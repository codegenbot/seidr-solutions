#include <map>
#include <string>
#include <cassert>

// Declare histogram function
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

// Declare issame function
bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || pair.second != b[pair.first]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
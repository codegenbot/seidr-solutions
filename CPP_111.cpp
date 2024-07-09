```cpp
#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> result;
    for (char c : str) {
        if (result.find(c) != result.end()) {
            result[c]++;
        } else {
            result[c] = 1;
        }
    }
    return result;
}

int main() {
    assert(issame(histogram("a"), {{ 'a', 1 } }));
    return 0;
}
```c++
#include <map>
#include <string>

std::map<char, int> histogram(const std::string& s) {
    std::map<char, int> result;
    for (char c : s) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
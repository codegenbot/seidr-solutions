```c++
#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(const char* str) {
    std::map<char, int> hist;
    for (const auto& c : str) {
        hist[c] = (hist.find(c) != hist.end()) ? hist[c] + 1 : 1;
    }
    return hist;
}

int main() {
    assert(issame(histogram("a"), std::map<char, int>{{'a', 1}}));
    return 0;
}
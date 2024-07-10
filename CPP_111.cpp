#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string s) {
    std::map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
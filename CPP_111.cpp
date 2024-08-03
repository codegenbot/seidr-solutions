#include <map>
#include <iostream>
#include <cassert>

std::map<char, int> histogram(const std::string& s) {
    std::map<char, int> result;
    for (char c : s) {
        result[c]++;
    }
    return result;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}
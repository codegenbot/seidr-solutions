#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<char, int> histogram(std::string test);

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    for (char c : test) {
        result[c]++;
    }
    return result;
}

bool issame(std::map<char, int>& a, std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), std::map<char, int>{{'a', 1}}));
    return 0;
}
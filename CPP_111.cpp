#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    for (char c : test) {
        result[c]++;
    }
    return result;
}

bool is_same(std::map<char, int>& a, std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(is_same(histogram("a"), std::map<char, int>{}));
    return 0;
}
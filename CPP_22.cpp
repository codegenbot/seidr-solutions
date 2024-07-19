#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> filter_integers(const std::vector<char>& input) {
    std::vector<int> output;
    for (char c : input) {
        if (std::isdigit(c)) {
            output.push_back(c - '0');
        }
    }
    return output;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
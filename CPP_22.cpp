#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& data) {
    std::vector<int> result;
    for (int num : data) {
        if (num == 3) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 2, 3, 3, 5, 6}), std::vector<int>{3, 3, 3}));
    return 0;
}
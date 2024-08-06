#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (int i : v) {
        result.push_back(i + 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(incr_list(std::vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
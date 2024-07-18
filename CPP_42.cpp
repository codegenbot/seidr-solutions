#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> incremented = l;
    for (int i = 0; i < incremented.size(); i++) {
        incremented[i]++;
    }
    return incremented;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
#include <iostream>
#include <vector>
#include <cassert>

void incr_list(std::vector<int>& l) {
    for (int& num : l) {
        num++;
    }
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(input);
    assert(issame(input, {6, 3, 6, 3, 4, 4, 10, 1, 124}));

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int i : vec) {
        if (std::isfinite(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
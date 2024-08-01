#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int x : a) {
        if (std::find(b.begin(), b.end(), x) != b.end()) {
            result.push_back(x);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
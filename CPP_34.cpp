#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> output = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert(issame(output, {5, 3, 5, 2, 3, 3, 9, 0, 123}));
    assert(issame(std::vector<int>(std::unique(output.begin(), output.end())), {0, 2, 3, 5, 9, 123}));

    std::cout << "Output is correct" << std::endl;
    return 0;
}
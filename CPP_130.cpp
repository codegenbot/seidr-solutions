#include <vector>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> input1, input2;
    int n, m, val;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> val;
        input1.push_back(val);
    }

    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::cin >> val;
        input2.push_back(val);
    }

    assert(issame(input1, input2));
    return 0;
}
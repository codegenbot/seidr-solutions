#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> a, int n) {
    std::vector<int> result;
    std::sort(a.begin(), a.end(), std::greater<int>());
    for (int i = 0; i < n && i < a.size(); ++i) {
        result.push_back(a[i]);
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}
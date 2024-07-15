#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

std::vector<int> unique(const std::vector<int>& l) {
    std::vector<int> result = l;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "Test passed successfully!\n";
    return 0;
}
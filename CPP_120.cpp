#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int maximum(std::vector<int> a, int defaultValue) {
    if (a.empty()) {
        return defaultValue;
    }
    return *std::max_element(a.begin(), a.end());
}

int main() {
    assert(is_same(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{}));
    assert(is_same(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{-400, -23, 0, 1, 2, 3, 243}));
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 243);

    return 0;
}
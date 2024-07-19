#include <vector>
#include <cassert>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] % 2 == 0 ? a[i] * 2 : a[i] + b[i]);
    }
    return result;
}

int main() {
    assert(issame({1, 2, 3}, {1, 2, 6}) == std::vector<int>({2, 4, 9}));
    return 0;
}
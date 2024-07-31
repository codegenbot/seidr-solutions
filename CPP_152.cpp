#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] == b[i] ? 1 : 0;
    }
    return result;
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, 5}, std::vector<int>{-1, 2, 3, 4}) == std::vector<int>{0, 1, 1, 0});
    return 0;
}
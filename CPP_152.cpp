#include <vector>
#include <cassert>

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); i++) {
        result.push_back(a[i] == b[i] ? 1 : 0);
    }
    return result;
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == std::vector<int>{2, 0, 0, 1});
    return 0;
}
#include <vector>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());

    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] - b[i];
    }

    return result;
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == std::vector<int>{2, 0, 0, 1});
    return 0;
}
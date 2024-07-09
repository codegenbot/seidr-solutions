\#include <vector>
\#include <cassert>

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(4);
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            ++result[0];
        } else if (a[i] > b[i]) {
            ++result[1];
        } else {
            ++result[3];
        }
    }
    return result;
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == std::vector<int>{2, 0, 0, 1});
    return 0;
}
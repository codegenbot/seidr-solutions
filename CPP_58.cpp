#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> l1_sorted = l1;
    std::vector<int> l2_sorted = l2;

    std::sort(l1_sorted.begin(), l1_sorted.end());
    std::sort(l2_sorted.begin(), l2_sorted.end());

    std::vector<int> result;
    std::set_intersection(l1_sorted.begin(), l1_sorted.end(), l2_sorted.begin(), l2_sorted.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
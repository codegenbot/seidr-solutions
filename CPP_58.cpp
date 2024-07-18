#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> l1_copy(l1.begin(), l1.end());
    std::vector<int> l2_copy(l2.begin(), l2.end());
    std::sort(l1_copy.begin(), l1_copy.end());
    std::sort(l2_copy.begin(), l2_copy.end());
    std::vector<int> result;
    std::set_intersection(l1_copy.begin(), l1_copy.end(), l2_copy.begin(), l2_copy.end(), std::back_inserter(result));
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
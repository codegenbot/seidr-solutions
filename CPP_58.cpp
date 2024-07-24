#include <algorithm>
#include <cassert>
#include <vector>
#include <set>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& l1, const std::vector<int>& l2) {
    return l1 == l2;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
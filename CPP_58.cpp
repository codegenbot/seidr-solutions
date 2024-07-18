#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> l1_cpy = l1;
    std::vector<int> l2_cpy = l2;

    std::sort(l1_cpy.begin(), l1_cpy.end());
    std::sort(l2_cpy.begin(), l2_cpy.end());

    std::vector<int> result;
    std::set_intersection(l1_cpy.begin(), l1_cpy.end(), l2_cpy.begin(), l2_cpy.end(), std::back_inserter(result));

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
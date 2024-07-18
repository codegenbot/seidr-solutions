#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> l1_temp(l1.begin(), l1.end());
    std::vector<int> l2_temp(l2.begin(), l2.end());
    std::sort(l1_temp.begin(), l1_temp.end());
    std::sort(l2_temp.begin(), l2_temp.end());
    std::vector<int> result;
    std::set_intersection(l1_temp.begin(), l1_temp.end(), l2_temp.begin(), l2_temp.end(), std::back_inserter(result));
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
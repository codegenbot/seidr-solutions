#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> sorted_l1 = l1;
    std::vector<int> sorted_l2 = l2;
    std::sort(sorted_l1.begin(), sorted_l1.end());
    std::sort(sorted_l2.begin(), sorted_l2.end());
    
    std::vector<int> result;
    std::set_intersection(sorted_l1.begin(), sorted_l1.end(), sorted_l2.begin(), sorted_l2.end(), std::back_inserter(result));
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
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your implementation here
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    // Additional test cases can be added here
    return 0;
}
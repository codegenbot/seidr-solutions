#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> l1 = a;
    std::vector<int> l2 = b;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));
    return 0;
}
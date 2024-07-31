#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
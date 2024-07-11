#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == true);
    return 0;
}
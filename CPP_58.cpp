#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
#include <cassert>

namespace std {
    using ::vector;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame(common({4, 3, 2, 8}, {2, 3, 5}), {2, 3}));
assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
assert(issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));
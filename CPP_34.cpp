#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> fixCode(const std::vector<int>& l) {
    std::vector<int> res = l;
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}

assert(issame(fixCode({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{0, 2, 3, 5, 9, 123}));
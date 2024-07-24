#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

assert(issame(incr_list({1, 2, 3}), {2, 3, 4}));
assert(issame(incr_list({-1, 0, 1}), {0, 1, 2}));
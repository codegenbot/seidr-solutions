#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        result[i]++;
    }
    return result;
}

assert(issame(incr_list({1, 2, 3}), {2, 3, 4}));
assert(issame(incr_list({5, 10, 15}), {6, 11, 16}));
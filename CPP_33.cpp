#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> res = l;
    for (size_t i = 0; i < l.size(); i += 3) {
        std::sort(res.begin() + i, std::min(res.begin() + i + 3, res.end()));
    }
    return res;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
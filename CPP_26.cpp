```cpp
#include <vector>
#include <algorithm>

std::vector<int> removeDuplicates(std::vector<int> vec) {
    if (vec.empty())
        return vec;

    std::vector<int> result(1, vec[0]);

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] != result.back()) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

bool same(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int solve() {
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}
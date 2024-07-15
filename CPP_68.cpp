#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for(int i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}

int main() {
    assert(issame(pluck(std::vector<int>{7, 9, 7, 1}), std::vector<int>{7, 7}));
    return 0;
}
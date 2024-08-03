#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

bool common(const std::vector<int>& a, const std::vector<int>& b) {
    return issame(a, b);
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}
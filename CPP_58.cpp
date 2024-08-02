#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));

    return 0;
}
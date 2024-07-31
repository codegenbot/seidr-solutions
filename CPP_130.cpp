#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::vector<int> v1 = {1, 3};
    std::vector<int> v2 = {1, 3};
    
    assert(issame(v1, v2));
    
    return 0;
}
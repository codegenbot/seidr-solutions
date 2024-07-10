#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));  
    return 0;
}
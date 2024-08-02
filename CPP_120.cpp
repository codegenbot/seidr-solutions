#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& bb) {
    return a == bb;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.rbegin(), arr.rend());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}
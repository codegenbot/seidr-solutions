#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> temp = arr;
    std::sort(temp.rbegin(), temp.rend());
    return std::vector<int>(temp.begin(), temp.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}
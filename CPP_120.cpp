#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> arr_copy = arr;
    std::sort(arr_copy.begin(), arr_copy.end(), std::greater<int>());
    return std::vector<int>(arr_copy.begin(), arr_copy.begin() + std::min(k, static_cast<int>(arr_copy.size())));
}

int main() {
    assert(issame(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    return 0;
}
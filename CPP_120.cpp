#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

std::vector<int> maximum(std::vector<int> a, int k) {
    std::sort(a.begin(), a.end(), std::greater<int>());
    std::vector<int> result(a.begin(), a.begin() + k);
    return result;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == std::vector<int>{});
    
    return 0;
}
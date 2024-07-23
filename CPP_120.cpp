#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while(k--) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    assert(areEqual(maximum({1, 2, 3, -23, 243, -400, 0}, 7), {0, 2, 3}));
    return 0;
}
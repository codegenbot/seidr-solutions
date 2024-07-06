#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (std::bitset<32>(a).count() == std::bitset<32>(b).count()) {
            return a < b;
        }
        return std::bitset<32>(a).count() < std::bitset<32>(b).count();
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}
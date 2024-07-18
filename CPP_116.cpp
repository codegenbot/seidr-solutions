#include <vector>
#include <algorithm>
#include <bitset>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = std::bitset<32>(a).count();
        int count_b = std::bitset<32>(b).count();
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}
#include <vector>
#include <algorithm>

std::vector<int> sort_vector(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return bitset<32>(a).count() == bitset<32>(b).count() ? a < b : bitset<32>(a).count() < bitset<32>(b).count();
    });
    return arr;
}
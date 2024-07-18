#include <vector>
#include <algorithm>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = std::bitset<sizeof(int)*CHAR_BIT>(a).count();
        int count_b = std::bitset<sizeof(int)*CHAR_BIT>(b).count();
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}
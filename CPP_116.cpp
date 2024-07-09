```cpp
#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = std::bitset<32>(a).count();
        int ones_b = std::bitset<32>(b).count();

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
    return arr;
}
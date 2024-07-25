```cpp
#include <vector>
#include <algorithm>
#include <bitset>

bool issame(int a, int b) {
    // Function body here.
    return false;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (std::bitset<32>(a).count() != std::bitset<32>(b).count())
            return std::bitset<32>(a).count() < std::bitset<32>(b).count();
        else
            return issame(a, b);
    });
    return arr;
}
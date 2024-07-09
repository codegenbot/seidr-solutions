```cpp
#include <vector>
#include <algorithm>

bool areEqual(int a, int b) {
    int ones_a = __builtin_popcount(a);
    int ones_b = __builtin_popcount(b);

    if (ones_a == ones_b)
        return a < b;
    else
        return ones_a < ones_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), areEqual);
    return arr;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    assert(std::equal(arr.begin(), arr.end(), sort_array(arr).begin()));
    return 0;
}
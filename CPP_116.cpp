```cpp
#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
    return arr;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    std::vector<int> sorted_arr = sort_array(arr);
    for (int i = 0; i < sorted_arr.size() - 1; i++) {
        if (sorted_arr[i] >= sorted_arr[i + 1]) {
            std::cout << "Array is not sorted correctly" << std::endl;
            return 1;
        }
    }
    std::cout << "Array is sorted correctly" << std::endl;
    return 0;
}
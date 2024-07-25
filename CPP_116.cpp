#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcountll(a);
        int count_b = __builtin_popcountll(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

std::vector<int> sorted = sort_array({2, 4, 8, 16, 32});
for (int num : sorted) {
    std::cout << num << " ";
}

return 0;
#include <vector>
#include <cassert>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    return count_a == count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (issame(a, b)) {
            return a < b;
        }
        return __builtin_popcount(a) < __builtin_popcount(b);
    });
    return arr;
}

int main() {
    std::vector<int> arr = {5, 3, 9, 6, 1};
    arr = sort_array(arr);
    for (int num : arr) {
        // Output/display the sorted array elements
        printf("%d ", num);
    }
    return 0;
}
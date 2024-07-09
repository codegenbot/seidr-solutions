#include <vector>
#include <cassert>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    return count_a == count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (issame(a, b)) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    std::vector<int> arr = {3, 5, 7, 1, 15, 31};
    arr = sort_array(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
    assert(arr == std::vector<int>{1, 3, 5, 7, 15, 31});
    return 0;
}
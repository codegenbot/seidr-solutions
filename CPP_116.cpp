#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    if (count_a == count_b) {
        return a < b;
    }
    return count_a < count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    sort(arr.begin(), arr.end(), issame);
    return arr;
}

int main() {
    std::vector<int> arr = {5, 2, 8, 3, 1};
    std::vector<int> expected_sorted = {1, 2, 3, 5, 8};
    sort_array(arr);
    
    assert(arr == expected_sorted);
}
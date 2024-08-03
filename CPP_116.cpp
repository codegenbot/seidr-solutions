#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    std::vector<int> input = {5, 3, 9, 6, 10};
    std::vector<int> expected = {3, 5, 6, 9, 10};
    
    std::vector<int> result = sort_array(input);

    assert(result == expected);
    
    return 0;
}
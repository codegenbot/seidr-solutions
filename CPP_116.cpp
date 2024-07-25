#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> result = arr;
    std::sort(result.begin(), result.end(),
        [](int a, int b) {
            int ones_a = __builtin_popcount(a);
            int ones_b = __builtin_popcount(b);
            if (ones_a == ones_b)
                return a < b;
            else
                return ones_a < ones_b;
        });
    return result;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}
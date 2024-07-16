#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::sort(arr.begin(), arr.end(), [](int a, int b){
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    if (count_a == count_b) {
        return a < b;
    }
    return count_a < count_b;
});

int main() {
    assert(issame(std::vector<int>({2, 4, 8, 16, 32}), std::vector<int>({2, 4, 8, 16, 32})));
    return 0;
}
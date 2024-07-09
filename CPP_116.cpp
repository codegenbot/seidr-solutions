#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

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
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    std::cout << "Test passed." << std::endl;
    return 0;
}
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

sort(arr.begin(), arr.end(), [](int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    if (count_a == count_b) {
        return a < b;
    }
    return count_a < count_b;
});

return arr;
```
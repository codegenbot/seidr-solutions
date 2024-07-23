```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) {
            return false;
        }
    }
    return true;
}

vector<float> sort_even(const vector<float>& v) {
    vector<float> even;
    for (float x : v) {
        if (x % 2 == 0)
            even.push_back(x);
    }
    sort(even.begin(), even.end());
    return even;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 12}));
    return 0;
}
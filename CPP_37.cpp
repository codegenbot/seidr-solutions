```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool same(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (std::abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even, odd;

    even.reserve(l.size());
    odd.reserve(l.size());

    for (float i : l) {
        if (even.size() % 2 == 0) {
            if (!even.empty())
                even.push_back(i);
            else
                odd.push_back(i);
        } else {
            even.push_back(i);
        }
    }

    std::sort(even.begin(), even.end());

    for (float i : even)
        odd.insert(odd.end(), i);

    return odd;
}

int main() {
    assert(same(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
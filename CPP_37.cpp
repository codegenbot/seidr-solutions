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
    std::vector<float> result;
    for (float i : l) {
        if (result.size() % 2 == 0) {
            std::vector<float> even_indices(result.begin(), result.end());
            std::sort(even_indices.begin(), even_indices.end());
            result.clear();
            for (float j : even_indices) {
                result.push_back(j);
            }
        } else {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(same(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
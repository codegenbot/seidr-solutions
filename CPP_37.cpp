```
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
    std::vector<float> result(l.size());
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    result[idx++] = l[j];
                }
            }
            std::sort(result.begin(), result.end());
        } else {
            result[idx++] = l[i];
        }
    }
    return result;
}

int main() {
    assert(same(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
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
    std::vector<float> result(l.size(), 0.0);
    std::vector<float> even_elements;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        } else {
            result[i] = l[i];
        }
    }
    std::sort(even_elements.begin(), even_elements.end());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = even_elements[0];
            even_elements.erase(even_elements.begin());
        }
    }
    return result;
}

int main() {
    assert(same(std::vector<float>({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float> ({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10})));
    return 0;
}
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (std::abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even_indices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even_indices.push_back(l[j]);
                }
            }
            std::sort(even_indices.begin(), even_indices.end());
            result[i] = even_indices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

std::vector<float> sort_even(std::vector<float> l) {
    int count = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    std::vector<float> even(l.begin(), l.begin() + count);
    std::sort(even.begin(), even.end());
    int k = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even[k++]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
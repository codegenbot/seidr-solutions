#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    std::sort(even_indices.begin(), even_indices.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_indices[j];
            j++;
        }
    }
    return l;
}

assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12, 8, 2, 4, 5, 3, 11, 12, 23, -10}));
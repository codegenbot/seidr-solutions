#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> even_indices;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
        }
    }
    std::sort(even_indices.begin(), even_indices.end());

    std::vector<float> l_prime;
    size_t j = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime.push_back(even_indices[j]);
            j++;
        } else {
            l_prime.push_back(l[i]);
        }
    }

    return l_prime;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}
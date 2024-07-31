#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> sorted_even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even_indices.push_back(l[i]);
        }
    }
    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[j];
            j++;
        }
    }
    return l;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    return 0;
}
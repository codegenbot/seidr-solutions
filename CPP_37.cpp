#include <vector>
#include <algorithm>
#include <cassert>

bool sort_even(std::vector<float> a) {
    std::vector<float> sorted_even_indices;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            sorted_even_indices.push_back(a[i]);
        }
    }

    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());

    int sorted_even_index = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            a[i] = sorted_even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }

    return a;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    return 0;
}
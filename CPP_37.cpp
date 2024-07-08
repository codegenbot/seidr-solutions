#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

void sort_even(std::vector<float>& a) {
    std::vector<float> sorted_even_indices;

    for (int i = 0; i < a.size(); i += 2) {
        sorted_even_indices.push_back(a[i]);
    }

    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());

    int sorted_even_index = 0;
    for (int i = 0; i < a.size(); i += 2) {
        a[i] = sorted_even_indices[sorted_even_index];
        sorted_even_index++;
    }
}

int main() {
    std::vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);
    assert(issame(input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}
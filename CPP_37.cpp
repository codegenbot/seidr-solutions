#include <vector>
#include <algorithm>

void sort_even(std::vector<float>& a) {
    std::vector<float> even_indices;
    
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(a[i]);
        }
    }

    std::sort(even_indices.begin(), even_indices.end());

    int sorted_even_index = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            a[i] = even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }
}

bool issame(std::vector<float> a, std::vector<float> b) {
    sort_even(a);
    return a == b;
}
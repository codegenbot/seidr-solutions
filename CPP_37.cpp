#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort(std::vector<float> l) {
    std::vector<float> even_indices;
    std::vector<float> sorted_even_indices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }

    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());

    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_index];
            sorted_index++;
        }
    }

    return l;
}
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_list(std::vector<float> l) {
    std::vector<float> even_indices;
    std::vector<float> sorted_even_indices;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }
    
    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());
    
    int sorted_even_idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_even_idx];
            sorted_even_idx++;
        }
    }
    
    return l;
}
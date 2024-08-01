#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    return v1 == v2;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_indices;
    std::vector<float> sorted_even_indices;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }
    std::sort(sorted_even_indices.begin(), sorted_even_indices.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    std::vector<float> l = {3.5, 2.0, 4.5, 1.0, 5.5};
    
    std::vector<float> original_l = l;
    sort_even(l);
    
    std::vector<float> expected_sorted_l = {1.0, 2.0, 4.5, 3.5, 5.5};
    
    if (issame(l, expected_sorted_l)) {
        std::cout << "Sorting even indices successful." << std::endl;
    } else {
        std::cout << "Sorting even indices failed." << std::endl;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float>& v1, std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }

    return true;
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
    sort(sorted_even_indices.begin(), sorted_even_indices.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    std::vector<float> l = {3.2, 7.1, 2.4, 9.5, 5.8, 1.0};
    std::vector<float> expected = {1.0, 7.1, 2.4, 9.5, 3.2, 5.8};

    sort_even(l);

    if (issame(l, expected)) {
        std::cout << "Test Passed!" << std::endl;
    } else {
        std::cout << "Test Failed!" << std::endl;
    }

    return 0;
}
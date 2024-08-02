#include <iostream>
#include <vector>
#include <algorithm>

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

int main() {
    std::vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    for (const auto& elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
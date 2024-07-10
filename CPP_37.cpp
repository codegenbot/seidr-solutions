#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i += 2) {
        sorted_even_values.push_back(l[i]);
    }
    std::sort(sorted_even_values.begin(), sorted_even_values.end());
    for (int i = 0, j = 0; i < l.size(); i += 2, j++) {
        l[i] = sorted_even_values[j];
    }
    return l;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}
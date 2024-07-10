#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_values;
    for (size_t i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    std::sort(even_values.begin(), even_values.end());
    for (size_t i = 0, j = 0; i < l.size(); i += 2, ++j) {
        l[i] = even_values[j];
    }
}

int main() {
    std::vector<float> l = {3.2, 1.7, 4.5, 2.1, 5.6};
    std::vector<float> sorted_l = {1.7, 2.1, 3.2, 4.5, 5.6};

    sort_even(l);
    bool is_same_result = issame(l, sorted_l);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_values;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    std::sort(even_values.begin(), even_values.end());
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_values[j];
            ++j;
        }
    }
}

int main() {
    std::vector<float> l = {3.2, 1.7, 4.5, 2.1, 5.6};
    std::vector<float> sorted_l = {1.7, 2.1, 3.2, 4.5, 5.6};

    sort_even(l);
    bool is_same_result = issame(l, sorted_l);

    assert(is_same_result);

    return 0;
}
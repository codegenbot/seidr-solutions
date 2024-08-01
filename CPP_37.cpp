#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

void sort_even(std::vector<int>& l) {
    std::vector<int> even_values;
    std::vector<int> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    std::sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
}

int main() {
    std::vector<int> l = {3, 2, 1, 4, 5, 6};
    sort_even(l);

    assert(issame(l, {1, 2, 3, 4, 5, 6}));

    return 0;
}
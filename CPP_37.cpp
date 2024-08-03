#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_values;
    std::vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }

    int even_index = 0;
    std::sort(sorted_even_values.begin(), sorted_even_values.end());

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[even_index];
            even_index++;
        }
    }

    return l;
}
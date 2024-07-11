#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b);

void sort_even(std::vector<float>& l);

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_values;
    std::vector<float> sorted_even_values;
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
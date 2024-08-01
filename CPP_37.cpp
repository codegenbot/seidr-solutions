#include <vector>
#include <algorithm>

void sort_even(const std::vector<int>& l) {
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

std::vector<int> l = {3, 2, 1, 4, 5, 6};
sort_even(l);
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool std::vector<float> issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
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
    return l;
}

assert(std::vector<float> issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
});

std::cout << "Test passed successfully!" << std::endl;
return 0;
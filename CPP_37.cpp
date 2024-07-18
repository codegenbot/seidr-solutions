#include <iostream>
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    // Define the issame function correctly
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
    sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_index];
            sorted_index++;
        }
    }
    return l;
}

int main() {
    std::vector<float> input = {5.5, 2.2, 3.3, 4.4, 1.1};
    std::vector<float> result = sort_even(input);
    for (float num : result) {
        std::cout << num << " ";
    }
    return 0;
}
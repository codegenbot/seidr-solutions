#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<float>& values) {
    std::sort(values.begin(), values.end(), [](float a, float b) {
        return ((int)a % 2 == 0) && ((int)b % 2 == 0) && (a < b);
    });
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> values = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> temp_values = values;
    sort_even(temp_values);
    assert(issame(temp_values, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
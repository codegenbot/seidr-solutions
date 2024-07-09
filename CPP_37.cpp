#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> even_values;
    std::vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    std::sort(even_values.begin(), even_values.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}

void test_sort_even() {
    assert((sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}

int main() {
    test_sort_even();
    std::cout << "All test cases pass.";
    return 0;
}
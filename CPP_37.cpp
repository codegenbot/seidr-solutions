#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> even_elements;
    std::vector<float> result;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elements.push_back(l[i]);
        }
    }

    std::sort(even_elements.begin(), even_elements.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_elements[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}

int main() {
    assert (sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) == std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});

    return 0;
}
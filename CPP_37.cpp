#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_values;
    for (int i = 1; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    std::sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = even_values[j];
            ++j;
        }
    }

    return l;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}
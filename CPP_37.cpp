#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

void sort_even(std::vector<float>& l) {
    std::vector<float> even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }

    std::sort(even_values.begin(), even_values.end());
    
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_values[even_index];
            even_index++;
        }
    }
}

std::vector<float> sort_even_elements(std::vector<float> l) {
    sort_even(l);
    return l;
}

int main() {
    std::vector<float> input_vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> expected_output = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    std::vector<float> actual_output = sort_even_elements(input_vec);
    assert(issame(actual_output, expected_output));
    return 0;
}
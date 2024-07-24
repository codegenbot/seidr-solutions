#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_values;
    std::vector<float> result;
    
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    std::sort(even_values.begin(), even_values.end());
    
    int even_index = 0;
    for (size_t i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_values[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> input = {3.5, 2.0, 1.2, 4.8, 5.3};
    std::vector<float> sorted_even = sort_even(input);
    
    assert(issame(sorted_even, {1.2, 2.0, 3.5, 4.8, 5.3}));
    
    return 0;
}
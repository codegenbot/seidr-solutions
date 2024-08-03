#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& v);

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> even_sorted;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_sorted.push_back(num);
        }
    }
    std::sort(even_sorted.begin(), even_sorted.end());
    return even_sorted;
}

int main() {
    std::vector<float> numbers = {2.5, 3, 4.2, 6, 7.5, 8, 9.1};
    std::vector<float> expected_sorted_even = {2, 4};
    std::vector<float> sorted_even_numbers = sort_even(numbers);
    
    assert(issame(sorted_even_numbers, expected_sorted_even));
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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
    std::vector<float> sorted_even_numbers = sort_even(numbers);
    
    // Test the sorted even numbers
    std::vector<float> expected_sorted_even = {2.0, 4.2, 6.0, 8.0};
    assert(sorted_even_numbers.size() == expected_sorted_even.size());
    for (size_t i = 0; i < sorted_even_numbers.size(); ++i) {
        assert(sorted_even_numbers[i] == expected_sorted_even[i]);
    }

    return 0;
}
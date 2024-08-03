#include <iostream>
#include <vector>
#include <algorithm>

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
    // Add test cases to verify the correctness of functions
    std::vector<float> test_input = {3.0, 5.0, 2.0, 1.0, 4.0};
    std::vector<float> result = sort_even(test_input);

    // Output the sorted even numbers
    for (float num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}